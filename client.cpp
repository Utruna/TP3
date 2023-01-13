#include<iostream>
#include<vector>
#include "client.h"

Client::Client(std::string nom, std::string prenom):
    _nom(nom), _prenom(prenom) {
    }

std::string Client::prenom() const {
    return _prenom;
}

std::string Client::nom() const {
    return _nom;
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
