#include<iostream>
#include "produit.h"

Produit::Produit(std::string nom, std::string description, int quantite, float prix) :
    _nom(nom), _description(description), _quantite(quantite), _prix(prix) {}

std::string Produit::nom() const {
    return _nom;
}

std::string Produit::description() const {
    return _description;
}

int Produit::quantite() const {
    return _quantite;
}

float Produit::prix() const {
    return _prix;
}

void Produit::updateQuantite(int nouvelleQuantite) {
    _quantite = nouvelleQuantite;
}

void Produit::updatePrix(float nouveauPrix) {
    _prix = nouveauPrix;
}

void Produit::afficherProduit() {
    std::cout << "nom : " << _nom << ", description : " << _description << ", prix " << _prix  << " euro" << std::endl;
}


void Produit::updateQuantitevoulu(int nouvelleQuantitevoulu) {
    if (_quantite-nouvelleQuantitevoulu>0) {
        _quantitevoulu = nouvelleQuantitevoulu;
        _quantite = _quantite-nouvelleQuantitevoulu;
    }
    else {
        std::cout << "la quantite demandee est superieure a la quantite disponible" << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream& os, const Produit& produit) {
    os << "nom : " << produit.affichenom() << ", description : " << produit.affichedescription() << ", quantite : " << produit.affichequantite() << ", prix : " << produit.afficheprix() << " euro" << std::endl;
    return os;
}