//Nom du projet : TP Structure énumération union
//Nom de l'auteur : Podechard Thibault 
//Date de création : 26 Novembre 2024

#include <iostream>
#include <conio.h>
using namespace std;

enum EEtat { Vide = 0, Rouleau = 1, Pallette = 2 };
struct SPallette
{
	int poids;
	char reference[20];
};
struct SRouleau
{
	int numero;
	float longueur;
};
union UContenu
{
	SRouleau rouleau;
	SPallette pallette;
};
struct SCasier
{
	EEtat etat;
	UContenu contenu;
	int px, py;
};

int main()
{
	cout << "Voici le programme du fichier Transgerbeur :\n";

	int px, py;
	SCasier tabCasier[9];
	
	SRouleau ro1;
	ro1.longueur = 15.25;
	ro1.numero = 3;

	SPallette pa1;
	pa1.poids = 50;
	strcpy_s(pa1.reference, "Palette N1");

	SCasier etatC1;
	etatC1.etat = Vide;

	UContenu cont;
	cont.rouleau.longueur = ro1.longueur;
	cont.rouleau.numero = ro1.numero;
	cont.pallette.poids = pa1.poids;
	strcpy_s(cont.pallette.reference, pa1.reference);
	
	SCasier c1;
	c1.contenu.pallette.poids = pa1.poids;
	strcpy_s(c1.contenu.pallette.reference, pa1.reference);
	c1.etat = Pallette;
	c1.px = 0, c1.py = 0;

	SCasier c2;
	c2.etat = Pallette;

	tabCasier[0] = c1, tabCasier[2] = c2;
	cout << "\nTaille de C1 :" << sizeof c1 << "\nTaille de C2 :" << sizeof c2
		<< "\nTaille du Rouleau :" << sizeof ro1 << "\nTaille de la Pallette : "<< sizeof pa1;
}