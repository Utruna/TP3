#include<iostream>
#include "magasin.h"

std::vector<Client> Magasin::clients(){
    return _clients;
}
std::vector<Produit> Magasin::produits(){
    return _produits;
}
std::vector<Commande> Magasin::commandes(){
    return _commandes;
}

void Magasin::addProduct(Produit produit){
    _produits.push_back(produit);
}

void Magasin::affichFullProduit(){
    for (auto i = _produits.begin(); i != _produits.end(); i++)
    {
        Produit produit = *i;
        produit.afficherProduit();
    }    
}

void Magasin::affichProduit(std::string produit){
    for (auto i = _produits.begin(); i != _produits.end(); i++)
    {
        Produit produit1 = *i;
        Produit produitListe = produit1.
        if(produit == )
    }
    
}
