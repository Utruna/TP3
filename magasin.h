#include <iostream>
#include <vector>
#include "commande.h"

class Magasin {
    public:
        Magasin(std::vector<Client> clients, std::vector<Produit> produits, std::vector<Commande> commandes);
        std::vector<Client> clients();
        std::vector<Produit> produits();
        std::vector<Commande> commandes();
        void addProduct(Produit produit);
        void affichFullProduit();
        void affichProduit(std::string produit);
      
    private:
        std::vector<Client> _clients;
        std::vector<Produit> _produits;
        std::vector<Commande> _commandes;    
};
