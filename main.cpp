#include<iostream>
#include "produit.h"
#include "client.h"

int main() {
	Produit p("Produit 1", "Description 1", 10, 10.5);
	std::cout << p.affichenom() << std::endl;
	std::cout << p.affichedescription() << std::endl;
	std::cout << p.affichequantite() << std::endl;
	std::cout << p.afficheprix() << std::endl;
	p.updateQuantite(20);
	p.updatePrix(20.50);
	std::cout << p.affichequantite() << std::endl;
	std::cout << p.afficheprix() << std::endl;


	Client c("Nom", "Prenom");
	c.updatePannier("Produit 1");
	c.updatePannier("Produit 2");
	c.updatePannier("Produit 3");
	c.voirPannier();
	
	return 0;
}
