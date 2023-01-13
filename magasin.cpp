#include<iostream>
#include "magasin.h"


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
        if(produit == produit1.nom()){
            produit1.afficherProduit();
        }
    }
    
}