#ifndef produit_H
#define produit_H
#include<iostream>
#include "magasin.h"

class Produit {
    public:
        Produit(std::string nom, std::string description, int quantite, float prix);
        std::string affichenom() const;
        std::string affichedescription() const;
        int affichequantite() const;
        float afficheprix() const;
        void updatePrix(float nouveauPrix);
        void updateQuantite(int nouvelleQuantite);
        void afficherProduit();
        void updateQuantitevoulu(int nouvelleQuantitevoulu);
    private:
        std::string _nom;
        std::string _description;
        int _quantite;
        float _prix;
        int _quantitevoulu = 0;
};
std::ostream& operator<<(std::ostream& os, const Produit& produit);
#endif