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

void Client::updatePannier(Produit produitAAjouter, int quantite) {
    for (int i=0 ; i<quantite ; i++)
        _pannier.push_back(produitAAjouter);
    
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

void Client::modifierQuantiteProduit(Produit produitAModifier, int nouvelleQuantite) {
   int j = 0;;
    for (auto i = _pannier.begin(); i != _pannier.end(); i++) {
        if (_pannier[j].affichenom() == produitAModifier.affichenom()) {
            _pannier.erase(i);
            produitAModifier.updateQuantite(produitAModifier.affichequantite()+1);
            
        }
        j++;
       //REFAIRE CETTE FONCTION 
    }
    for (int i = 0; i<nouvelleQuantite; i++) {
        _pannier.push_back(produitAModifier);
    }

}

