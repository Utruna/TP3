#include <iostream>
#include <vector>
#include "client.h"

class Commande {
    public:
        Commande(Client client, std::vector<Produit> produits, bool delivered);
        Client client() const;
        std::vector<Produit> produits() const;
        bool delivered() const;    

    private:
       Client _client;
       std::vector<Produit> _produits;
       bool _delivered;
};
std::ostream& operator<<(std::ostream& os, const Commande& commande);

