#include<iostream>
#include<vector>
#include "commande.h"
#include "client.h"
#include "produit.h"

class Magasin {
    public :
        Magasin();
        void addProduit(Produit produit);
        void addClient(Client client);
        void addCommande(Commande commande);
    private :
        std::vector<produit_H> _products;
        std::vector<client_H> _clients;
        std::vector<Commande> _commandes;
};