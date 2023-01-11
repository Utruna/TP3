#include<iostream>
#include "produit.h"

Produit::Produit(std::string nom, std::string description, int quantite, float prix) :
    _nom(nom), _description(description), _quantite(quantite), _prix(prix) {}

std::string Produit::affichenom() const {
    return _nom;
}

std::string Produit::affichedescription() const {
    return _description;
}

int Produit::affichequantite() const {
    return _quantite;
}

float Produit::afficheprix() const {
    return _prix;
}

void Produit::updateQuantite(int nouvelleQuantite) {
    _quantite = nouvelleQuantite;
}

void Produit::updatePrix(float nouveauPrix) {
    _prix = nouveauPrix;
}
