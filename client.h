#include<iostream>
#include<vector>
#include "produit.h"

class Client {
    public:
        Client(std::string nom, std::string prenom, std::string id);
        std::string prenom() const;
        std::string nom() const;
        std::string id() const;
        void updatePannier(Produit &produitAAjouter, int quantite);
        void voirPannier();
        void afficherClient();
        void viderpannier();
        void modifierQuantiteProduit(Produit &produitAAjouter, int quantite);
        void retirerProduit(Produit &produitARetirer);
        std::vector<Produit> pannier() const;

    private:
        std::vector<Produit> _pannier;
        std::string _prenom;
        std::string _nom;
        std::string _id;
        int _quantitevoulu;
        
};
std::ostream& operator<<(std::ostream& os, const Client& client);
