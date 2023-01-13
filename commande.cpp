#include "commande.h"

Commande::Commande(Client client, bool delivered):
    _client(client), _delivered(delivered) {
        _produits = client.pannier();
    }


 Client Commande::client() const{
    return _client;
 }

std::vector<Produit> Commande::produits() const{
    return _produits;
}

bool Commande::delivered() const{
    if (_delivered == true) {
        return true;
    }
    else {
        return false;
    }
}  

std::ostream& operator<<(std::ostream& os, const Commande& commande) {
    os << "Client : " << commande.client() << " a commande " << std::endl;
    auto produits = commande.produits();
    for (auto i= produits.begin(); i != produits.end(); i++) {
        Produit produit = *i;
        os << produit << std::endl;
    }
    os << " et la commande est " ;
    if (commande.delivered() == 1)
        std::cout << "livrer" << std::endl;
    else
        std::cout << "non livrer" << std::endl;
    return os;
}