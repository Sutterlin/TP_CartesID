#include <iostream>
#include <stdlib.h>
#include "Carte.h"
#include <string>
#include "main.h"





using namespace std;

int main()
{
	int choix(0); //variable qui permet de choisir la fonction qu'on appelle
	int chosen(0);
	/*Carte seb;
	seb.créer();
	seb.affiche();
	seb.~Carte();
    
	*/

	Carte cartes[10]; //on crée un tableau de 10 cartes

	do {
		cout << "Que souhaitez vous faire? Créer, afficher, modifier ou supprimer une carte?" << endl;
		cin >> choix;
		

		if (choix == 1) {
			créer(cartes); //si on appuie sur 1, on crée une carte dans le premier espace disponible du tableau
			
		}
		else
		if (choix == 2) {
			afficher(cartes); //cela affiche le tableau

		}
		else {
			cout << "sur quelle carte voulez vous réaliser cette opération? (donnez l'id)" << endl;
			cin >> chosen;

			if (choix == 3) {
				modifier(cartes, chosen); //on modifie la carte dont on a l'id
			}

			if (choix == 4) {
				supprimer(cartes, chosen); //on supprime la carte dont on a l'id
			}







			
		}

	} while (choix != 0); //on continue tant qu'on a pas choisi le chiffre 0



	system("pause");








	return 0;
}







void créer(Carte cartes[]) {
	//BUT: remplir une carte du tableau, la première qui est libre
	//ENTREE: le tableau de cartes
	//SORTIE:le tableau de cartes avec une carte en +
	bool done(false);
	int i(0);
	do {
		if (cartes[i].getNom() == "") { //on vérifie que la case sur laquelle on se trouve est vide. Si oui, on la rempli avec la fonction membre "créer"
			cartes[i].créer();
			done = true;
			


		}
		
		

		i++;












	} while (done==false); //tant que on a pas trouvé de case vide, on continue


	








}

void afficher(Carte cartes[]) {
	//BUT: afficher le tableau
	//ENTREE: le tableau de cartes
	//SORTIE: l'affichage du tableau
	int i;
	for (i=0; i < 10; i++) {
		cartes[i].affiche(); //on appelle la fonction membre afficher sur chaque carte
		
	}

	






}

void modifier(Carte cartes[],int chosen) {
	//BUT: Modifier un paramètre d'une carte que l'on choisi
	//ENTREE: le tableau de carte, l'id de la carte qu'on veut modifier
	//SORTIE: le tableau mis à jour

	int i; 
	for (i = 0; i < 10; i++) {
		if (cartes[i].getID()==chosen){
		
			cartes[i].modifier(); //on appelle la méthode membre modifier après avoir trouvé le bon ID (il faudra lui donner le nom de ce qu'on veut modifier)
		
		
		}
	}


}


void supprimer(Carte cartes[],int chosen) {
	//BUT:supprimer une carte dans le tableau (on remet ses attributs à 0)
	//ENTREE: le tableau de cartes et l'id de la carte qu'on souhaite supprimer
	int i;
	Carte carte;
	for (i = 0; i < 10; i++) {
		if (cartes[i].getID() == chosen) {
			
			cartes[i] = carte; //on appelle la méthode membre supprimer après avoir trouvé le bon ID
			


		}
	}




}