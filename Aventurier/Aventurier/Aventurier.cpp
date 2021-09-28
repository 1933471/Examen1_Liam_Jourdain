// Aventurier.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <conio.h>
#include <iostream>
#include "Bonhomme.h"
#include "Marchand.h"

int choixMenu;
enum class MENU
{
	MENU_PRINCIPAL = 1,
	MENU_AVENTURIER = 2,
	MENU_ACHAT = 3,
	MENU_EQUIPEMMENT = 4
};
void menuPricipal()
{
	system("CLS");
	std::cout << "1- Statut de l'aventurier" << std::endl;
	std::cout << "2- Arme a vendre" << std::endl;
	std::cout << "3- Equiper une arme" << std::endl;
	std::cout << "4- Acheter une arme" << std::endl;
	std::cout << "Appuyer sur une touche pour faire votre choix" << std::endl;
	std::cin >> choixMenu;
}
int main()
{
	 Bonhomme* monAventurier = new Bonhomme();
	 monAventurier->init();
	 monAventurier->changerArme(monAventurier->getArme(1));
	 Marchand* marchand = new Marchand();
	 marchand->remplirVecArme();
	int pause;
	bool fin = false;
	int choixArme;
	while (fin != true)
	{
		menuPricipal();
		switch (choixMenu)
		{
		case 1:
			system("CLS");
			std::cout << "Statut de l'aventurier" << std::endl;
			std::cout << "Attaque :" << std::to_string(monAventurier->getAtt()) << std::endl;
			std::cout  << monAventurier->getArme(1)->to_string() << std::endl;
			std::cout << "Appuyer sur une touche pour revenir au menu principal" << std::endl;
			std::cin >> pause;
			system("CLS");
			
			break;
		case 2:
			system("CLS");
			if (marchand->getVecArme().size() > 0)
			{
				std::cout << "Arme a vendre" << std::endl;
				marchand->AfficherArme();				
			}
			else
			{
				std::cout << "Aucune arme disponible pour le moment"<< std::endl;
			}
			std::cout << "Appuyer sur une touche pour revenir au menu principal" << std::endl;
			std::cin >> pause;
			
			system("CLS");
			break;
		case 3:
			system("CLS");
			std::cout<<"Quelle arme voulez-vous equiper ?"<< std::endl;
			
			if (monAventurier->getVecArme().size() > 0)
			{
				monAventurier->afficherArme();
				std::cin >> choixArme ;
				choixArme = choixArme - 1;
				switch (choixArme)
				{
				case 1:
					monAventurier->changerArme(monAventurier->getArme(choixArme));
					break;
				case 2:
					monAventurier->changerArme(monAventurier->getArme(choixArme));
					break;
				case 3:
					monAventurier->changerArme(monAventurier->getArme(choixArme));
					break;
				case 4:
					monAventurier->changerArme(monAventurier->getArme(choixArme));
					break;
				case 5:
					monAventurier->changerArme(monAventurier->getArme(choixArme));
					break;
				default:
					break;
				}
			}
			else
			{
				std::cout << "Vous ne posseder aucune armes" << std::endl;
			}
			break;
		case 4:
			
			break;
		}
	}
	


}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
