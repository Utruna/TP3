#include<iostream>
#include<vector>
class Magasin {
    public:
        Magasin(std::string nom, std::string adresse, std::string telephone);
        std::string nom() const;
        std::string adresse() const;
        std::string telephone() const;
        std::string updateTelephone(std::string nouveauTelephone);
    private:
        
        std::vector<Product> _products;
        std::vector<Client> _clients;
        std::vector<Order> _commandes;
}