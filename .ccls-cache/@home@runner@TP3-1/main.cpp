#include<iostream>
#include "magasin.h"
#include "commande.h"

int main() {

	//PARTIE DE COLIN
	/*
	Produit p("Produit 1", "Description 1", 10, 10.5);
	
	std::cout << p.nom() << std::endl;
	std::cout << p.description() << std::endl;
	std::cout << p.quantite() << std::endl;
	std::cout << p.prix() << std::endl;
	
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
	std::cout << p2 << std::endl;
	c.updatePannier(p3,1);
	c.afficherClient();	
	c.voirPannier();
	p2.quantite();
	c.modifierQuantiteProduit(p2, 8);
	c.voirPannier();
	std::cout << p2 << std::endl;
	c.retirerProduit(p2);
<<<<<<< HEAD
	//c.voirPannier();
	std::cout << c << std::endl;*/

	//PARTIE DE LPB
	Produit p("Produit 1", "Description 1", 10, 10.5);
	Produit p2("Produit 2", "Description 2", 20, 20.5);
	Produit p3("Produit 3", "Description 3", 30, 30.5);

	Client c1("Nom 1", "Prenom 1");
	Client c2("Nom 2", "Prenom 2");
	
	Magasin m1;

	m1.addProduct(p);
	m1.addProduct(p2);
	m1.addProduct(p3);
	m1.addClient(c1);
	m1.addClient(c2);

	m1.affichFullProduit();
	m1.affichProduit("Produit 1");
	m1.updateStockProduit(p,85);
	m1.affichProduit("Produit 1");
	

/*
	c.updatePannier(p,2);
	std::cout << p2 << std::endl;

	std::cout << "le pannier est composer de " << std::endl;
	c.voirPannier();
	std::cout << c << std::endl;
	bool c_ok = true;
	Commande commande1(c, c_ok);
	std::cout << std::endl << std::endl << std::endl;
	std::cout << commande1 << std::endl;
*/
	return 0;
}
