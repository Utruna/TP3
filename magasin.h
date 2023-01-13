#include <iostream>
#include <vector>
#include "commande.h"

class Magasin {
    public:
        Magasin();
        std::vector<Client> clients();
        std::vector<Produit> produits();
        std::vector<Commande> commandes();
        void addProduct(Produit produit);
        void addClient(Client client);
        void addCommande(Commande commande);
        void affichFullProduit();
        void affichProduit(std::string produit);
        void updateStockProduit(Produit produit, int quantite);
      
    private:
        std::vector<Client> _clients;
        std::vector<Produit> _produits;
        std::vector<Commande> _commandes;    
};
