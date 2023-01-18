#include <iostream>
#include <vector>
#include "client.h"

class Commande {
    public:
        Commande(Client client, bool delivered);
        Client client() const;
        std::vector<Produit> produits() const;
        bool delivered(Client client) const;
        void etatbool(Client client, bool valider);

    private:
       Client _client;
       std::vector<Produit> _produits;
       bool _delivered;
};
std::ostream& operator<<(std::ostream& os, const Commande& commande);

