#include <iostream>
#include <vector>
#include "client.h"
#include "produit.h"

class Commande {
    public:
        Commande(Client client, std::vector<Produit> produits, bool delivered);
        Client client();
        std::vector<Produit> produits();
        bool delivered();    

    private:
       Client _client;
       std::vector<Produit> _produits;
       bool _delivered;
};