#include<iostream>
#include "magasin.h"

Magasin::Magasin(){}

void Magasin::addProduct(Produit produit){
    _produits.push_back(produit);
}
void Magasin::addClient(Client client){
    _clients.push_back(client);
}
void Magasin::addCommande(Commande commande){
    _commandes.push_back(commande);    
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

void Magasin::updateStockProduit(Produit produit, int quantite){
    int j = 0;
   for (auto i = _produits.begin(); i != _produits.end(); i++)
    {
        Produit produit1 = *i;
        if(produit.nom() == produit1.nom()){
            _produits[j].updateQuantite(quantite);
        }
    j++;    
    }
}