//Nom du projet : TP Structure énumération union
//Nom de l'auteur : Podechard Thibault 
//Date de création : 26 Novembre 2024

#include <iostream>
#include <conio.h>
using namespace std;

struct Srgb
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

union UColor
{
	unsigned int val;
	Srgb components;
	unsigned char tabCol[3];
};

int main()
{
	Srgb couleur;
	UColor tableau;
	cout << "Voici le programme du fichier RGB :\nVeuillez saisir les valeurs de la couleur que vous voulez afficher : ";
	cout << "Valeur de rouge (en hexadecimal) : ";
	cin >> hex >> couleur.r;
	cout << "Valeur de vert (en hexadecimal) : ";
	cin >> hex >> couleur.g;
	cout << "Valeur de bleu (en hexadecimal) : ";
	cin >> hex >> couleur.b;

	tableau.tabCol[0] = couleur.r;
	tableau.tabCol[1] = couleur.g;
	tableau.tabCol[2] = couleur.b;
	cout << hex << tableau.tabCol;
}