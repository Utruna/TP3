#include<iostream>
#include<vector>
#include "client.h"

Client::Client(std::string nom, std::string prenom, std::string id):
    _nom(nom), _prenom(prenom), _id(id) {
    }

std::string Client::prenom() const {
    return _prenom;
}

std::string Client::nom() const {
    return _nom;
}

std::string Client::id() const {
  return _id;
}

void Client::updatePannier(Produit &produitAAjouter, int quantite) {
    for (int i=0 ; i<quantite ; i++)
        _pannier.push_back(produitAAjouter);
        produitAAjouter.updateQuantitevoulu(produitAAjouter.quantite()-quantite);
    
}

void Client::voirPannier() {
    for (int i = 0; i < _pannier.size(); i++) {
        _pannier[i].afficherProduit();
    }
}

void Client::afficherClient() {
    std::cout << "nom : " << _nom << ", prenom : " << _prenom << std::endl;
}

void Client::viderpannier() {
    _pannier.clear();
}

std::vector<Produit> Client::pannier() const {
    return _pannier;
}

void Client::modifierQuantiteProduit(Produit &produitAModifier, int nouvelleQuantite) {
   std::vector<Produit> _pannier2;
    for (auto i = _pannier.begin(); i != _pannier.end(); i++) {
        if (i->nom() == produitAModifier.nom()) {
            produitAModifier.updateQuantite(produitAModifier.quantite()+1);
        }
        else {
            _pannier2.push_back(*(i));
        }
    }
    for (int i = 0; i<nouvelleQuantite; i++) {
        _pannier2.push_back(produitAModifier);
        produitAModifier.updateQuantite(produitAModifier.quantite()-1);
    }
    _pannier=_pannier2;

}

void Client::retirerProduit(Produit &produitARetirer) {
    std::vector<Produit> _pannier2;
    for (auto i = _pannier.begin(); i != _pannier.end(); i++) {
        if (i->nom() == produitARetirer.nom()) {
            produitARetirer.updateQuantite(produitARetirer.quantite()+1);
        }
        else {
            _pannier2.push_back(*(i));
        }
    }
    _pannier=_pannier2;
}

std::ostream& operator<<(std::ostream& os, const Client& client) {
    os << "nom : " << client.nom() << ", prenom : " << client.prenom() << std::endl;
    return os;
}
/*
void Client::pannierdefinitif() {
    int i = 1;
    int j = 0;
    std::vector<Produit> _templist;
    std::vector<int> _quantite;
    _templist.push_back(_pannier[0]);
    _quantite.push_back(1);
    while (i < int (_pannier.size())) {
        if (_templist[i].nom() == _pannier[i].nom()) {
            _quantite[j] = _quantite[j] + 1;
        }
        else {
            j++;
            _templist.push_back(_pannier[i]);
            _quantite.push_back(1);
        }
        i++;
    }
    std::cout << _templist.size() << std::endl;
    std::cout << _quantite.size() << std::endl;
    /*
    for (int i = 0; i < _templist.size(); i++) {
        std::cout << _templist[i].nom() << " " << _quantite[i] << std::endl;
    }
}
*/