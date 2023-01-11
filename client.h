#include<iostream>
#include<vector>

class Client {
    public:
        Client(std::string nom, std::string prenom);
        std::string prenom() const;
        std::string nom() const;
        void updatePannier(std::string add);
        void voirPannier();

    private:
        std::vector<std::string> _pannier;
        std::string _prenom;
        std::string _nom;
        

};