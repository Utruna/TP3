#include<iostream>
#include "commande.h"
int main() {
	Produit p("Produit 1", "Description 1", 10, 10.5);
	/*
	std::cout << p.nom() << std::endl;
	std::cout << p.description() << std::endl;
	std::cout << p.quantite() << std::endl;
	std::cout << p.prix() << std::endl;
	*/
	std::cout << p << std::endl;

	p.updateQuantite(20);
	p.updatePrix(20.50);
	//std::cout << p.affichequantite() << std::endl;
	//std::cout << p.afficheprix() << std::endl;
	//std::cout << p ;
	

	Produit p2("Produit 2", "Description 2", 20, 20.5);
	Produit p3("Produit 3", "Description 3", 30, 30.5);
	Client c("Nom", "Prenom");
	c.updatePannier(p,1);
	c.updatePannier(p2,10);
	c.updatePannier(p3,1);
	//c.afficherClient();	
	//c.voirPannier();
	//p2.affichequantite();
	c.modifierQuantiteProduit(p2, 8);
	//c.voirPannier();
	std::cout << p2 << std::endl;
	c.retirerProduit(p2);
	c.updatePannier(p,2);

	std::cout << "le pannier est composer de " << std::endl;
	c.voirPannier();
	std::cout << c << std::endl;
	bool c_ok = true;
	Commande commande1(c, c_ok);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << commande1 << std::endl;
	return 0;
}
