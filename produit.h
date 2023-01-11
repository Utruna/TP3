#include<iostream>


class Produit {
    public:
        Produit(std::string nom, std::string description, int quantite, float prix);
        std::string affichenom() const;
        std::string affichedescription() const;
        int affichequantite() const;
        float afficheprix() const;
        void updatePrix(float nouveauPrix);
        void updateQuantite(int nouvelleQuantite);
    private:
        std::string _nom;
        std::string _description;
        int _quantite;
        float _prix;
};