#include<iostream>
#include "magasin.h"

void Magasin::addProduit(Produit produit) {
    _products.push_back(produit);
}

void Magasin::addClient(Client client) {
    _clients.push_back(client);
}

void Magasin::addCommande(Commande commande) {
    _commandes.push_back(commande);
}
