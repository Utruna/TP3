#include "commande.h"

Commande::Commande(Client client, std::vector<Produit> produits, bool delivered):
    _client(client), _produits(produits), _delivered(delivered) {
    }


 Client Commande::client(){
    return _client;
 }
std::vector<Produit> Commande::produits(){
    return _produits;
}
bool Commande::delivered(){
    return _delivered;
}  