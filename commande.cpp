#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> produits, bool delivered):
    _client(client), _produits(produits), _delivered(delivered) {
    }


 Client Commande::client() const{
    return _client;
 }

std::vector<Produit> Commande::produits() const{
    return _produits;
}

bool Commande::delivered() const{
    return _delivered;
}  
/*
std::ostream& operator<<(std::ostream& os, const Commande& commande) {
    os << commande.client() << " a commande " << commande.produits() << " et la commande est " << commande.delivered() << std::endl;
}
*/