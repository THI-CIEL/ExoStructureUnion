//Nom du projet : TP Structure énumération union
//Nom de l'auteur : Podechard Thibault 
//Date de création : 26 Novembre 2024

#include <iostream>
#include <conio.h>
using namespace std;

union contenu;
struct palletteCasier
{
	int poids;
	char reference[20];
};
struct rouleauCasier
{
	int numero;
	float longueur;
};
struct casier
{
	enum EEtat;
};

int main()
{
	cout << "Voici le programme du fichier Transgerbeur :\n";
	int px, py;
	int casier = {};
	rouleauCasier ro1;
	palletteCasier pa1;
	
}