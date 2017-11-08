#include "Carte.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;



Carte::Carte() //constructeur
{
	static int i=0; //static permet de garder i en mémoire même après être sorti de la fonction
	i++;
	ID = i;
	Nom = "";
	Prenom = "";
	DateDeNaissance = "";
	Ville = "";
	CP = 0;

}


int Carte::getID() const 
{
	return ID;
}


string Carte::getNom() const
{
	return Nom;
}



string Carte::getPrenom() const
{
	return Prenom;
}



string Carte::getDateDeNaissance() const
{
	return DateDeNaissance;
}



string Carte::getVille() const
{
	return Ville;
}



int Carte::getCP() const
{
	return CP;
}



void Carte::setID(int mID)
{
	ID = mID;
}


void Carte::setNom(string mNom)
{
	Nom = mNom;
}


void Carte::setPrenom(string mPrenom)
{
	Prenom = mPrenom;
}


void Carte::setDateDeNaissance(string mDateDeNaissance)
{
	DateDeNaissance = mDateDeNaissance;
}


void Carte::setVille(string mVille)
{
	Ville = mVille;
}


void Carte::setCP(int mCP)
{
	CP = mCP;
}

void Carte::affiche() const
{
	cout << "ID:" << getID() << endl;
	cout << "Nom: " << getNom() << endl;
	cout << "Prenom: " << getPrenom() << endl;
	cout << "Date de naissance: " << getDateDeNaissance() << endl;
	cout << "Ville:" << getVille() << endl;
	cout << "CP: " << getCP() << endl;














	//ce qui va afficher ensuite
}


void Carte::créer()
{
	string nom,prenom,DateDeNaissance,ville;
	int CP;
	cout << "donnez moi un nom" << endl;
	cin >> nom;
	setNom(nom);

	cout << "donnez moi un prénom" << endl;
	cin >> prenom;
	setPrenom(prenom);

	cout << "donnez moi une date de naissance" << endl;
	cin >> DateDeNaissance;
	setDateDeNaissance(DateDeNaissance);

	cout << "donnez moi une ville" << endl;
	cin >> ville;
	setVille(ville);

	cout << "donnez moi un CP" << endl;
	cin >> CP;
	setCP(CP);

}


void Carte::modifier()
{
	string choix;
	string nom, prenom, DateDeNaissance, ville;
	int CP;

	cout << "que voulez vous modifier?" << endl;
	cin >> choix;

	if (choix == "nom") {


		
		cout << "donnez moi un nom" << endl;
		cin >> nom;
		setNom(nom);

	}

	if (choix == "prenom") {
		cout << "donnez moi un prénom" << endl;
		cin >> prenom;
		setPrenom(prenom);

	}


	if (choix == "date") {
		cout << "donnez moi une date de naissance" << endl;
		cin >> DateDeNaissance;
		setDateDeNaissance(DateDeNaissance);
	}

	if (choix == "ville") {
		cout << "donnez moi une ville" << endl;
		cin >> ville;
		setVille(ville);
	}

	if (choix == "CP") {
		cout << "donnez moi un CP" << endl;
		cin >> CP;
		setCP(CP);

	}











}





Carte::~Carte() //destructeur
{
}
