#include<iostream>
#include<vector>
#include "client.h"

Client::Client(std::string nom, std::string prenom):
    _nom(nom), _prenom(prenom) {
    }

std::string Client::prenom() const {
    return _prenom;
}

std::string Client::nom() const {
    return _nom;
}

void Client::updatePannier(std::string add) {
    _pannier.push_back(add);
}

void Client::voirPannier() {
    for (int i = 0; i < _pannier.size(); i++) {
        std::cout << _pannier[i] << std::endl;
    }
}