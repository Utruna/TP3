#include <iostream>
#include <vector>
#include "commande.h"

class Magasin {
    public:
        Magasin(std::vector<Client> clients, std::vector<Produit> produits, std::vector<Commande> commandes);
        std::vector<Client> clients();
        std::vector<Produit> produits();
        std::vector<Commande> commandes();
      
    private:
        std::vector<Client> _clients;
        std::vector<Produit> _produits;
        std::vector<Commande> _commandes;    
};