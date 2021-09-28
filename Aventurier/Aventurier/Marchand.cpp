#include "Marchand.h"
#include "Arme.h"
#include "Factory.h"
#include <iostream>
enum class HUMEUR
{
	FACHE = 1,
	JOYEUX = 2,
	IMPATIENT = 3
};
int Marchand::getPrix()
{
	int prixAchat;
	HUMEUR typeH = (HUMEUR)((rand() % (3 - 1 + 1)) + 1);
	for(int i = 0; i <= vecArme.size();i++)
	{ 
		Arme* arme = vecArme[i];
		if (typeH == HUMEUR::FACHE)
			prixAchat = arme->getValeur() + 10 ;
		else if (typeH == HUMEUR::JOYEUX)
			prixAchat = arme->getValeur() + 5;
		else
			prixAchat = arme->getValeur() + 8;
		return prixAchat;
	}
	
}
void Marchand::remplirVecArme()
{

	vecArme.push_back(Factory::getRandomArme());
	vecArme.push_back(Factory::getRandomArme());

}
void Marchand::AfficherArme()
{
	int noVaisseau = 1;
	for (auto i = vecArme.begin(); i != vecArme.end(); i++)
	{
		std::cout << std::to_string(noVaisseau) << " " << (*i)->to_string() << std::endl;
		noVaisseau++;
	}
}
std::vector<Arme*> Marchand::getVecArme()
{
	return vecArme;
}
