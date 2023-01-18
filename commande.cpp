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

bool Commande::delivered(Client client) const{
    client.viderpannier();
    return _delivered;
    }

void Commande::etatbool(Client client,bool valider) {
    if (valider == true) {
        _delivered = true;
        client.viderpannier();
    }
    else {
        _delivered = false;
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
    Client client = commande.client();
    bool comparateur = commande.delivered(client);
    if (comparateur == true)
        std::cout << "livrer" << std::endl;
    else
        std::cout << "non livrer" << std::endl;
    return os;
}

/*std::ostream& operator<<(std::ostream& os, const Commande& commande) {
    os << "Client : " << commande.client() << " a commande " << std::endl;
    auto produits = commande.produits();
    int j = 0;
    for (auto i= produits.begin(); i != produits.end(); i++) {
        Produit produit = *i;
        Produit produitApres = *(i+1);
        do{
            Produit produit = *i;
            Produit produitApres = *(i+1);
           j++;
           i+=j;
        }while(produit.nom() == produitApres.nom());

        os << produit << " Quantite : " << j << std::endl;
        j = 0;
    }
    os << " et la commande est " ;
    bool comparateur = commande.delivered();
    if (comparateur == true)
        std::cout << "livrer" << std::endl;
    else
        std::cout << "non livrer" << std::endl;
    return os;
}*/