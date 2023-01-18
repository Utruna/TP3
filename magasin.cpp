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

void deletProduitPannier(Client &client, Produit &produit) {
      std::vector<Produit> _pannier = client.pannier();
      std::vector<Produit> _pannier2 = _pannier;
    for (auto i = _pannier.begin(); i != _pannier.end(); i++) {
        if (i->nom() == produit.nom()) {
            produit.updateQuantite(produit.quantite()+1);
        }
        else {
            _pannier2.push_back(*(i));
        }
    }
    _pannier=_pannier2;
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

void Magasin::affichFullClients(){
   for (auto i = _clients.begin(); i != _clients.end(); i++)
    {
        Client client = *i;
        client.afficherClient();
    }  
}

void Magasin::affichClient(std::string client){
  for (auto i = _clients.begin(); i != _clients.end(); i++)
    {
        Client client1 = *i;
        if((client == client1.nom()) || (client == client1.id())){
            client1.afficherClient();
        }
    }
}

void modifpannierclient(Client &client,Produit &produit, int quantite) {
  client.modifierQuantiteProduit(produit, quantite);
}

void mettreAJourLaCommande(Commande &commande, bool valider) {
    commande.etatbool(valider);
}

void ValiderLaCommande(Commande &commande) {
    commande.etatbool(true);
}

void Magasin::affichFullCommandes(){
  for (auto i = _commandes.begin(); i != _commandes.end(); i++)
    {
        Commande commande = *i;
        std::cout << commande << std::endl;
        
    }
}

void Magasin::affichCommandesClient(Client client){
  for (auto i = _commandes.begin(); i != _commandes.end(); i++)
    {
        Commande commande = *i;
        std::string identifiant = commande.client().id();
        if(identifiant == client.id()){
          std::cout << commande << std::endl;
        }
    }
}