#include "Bonhomme.h"
#include "Arme.h"
#include <iostream>
#include"Factory.h"
Bonhomme::Bonhomme() : orDispo(100), attaque(10), force(8),nom("Stéphane")
{

}
Bonhomme::~Bonhomme()
{

}
void Bonhomme::perdreOr(int orUtilise)
{
	orDispo = orDispo - orUtilise;
}
void Bonhomme::acheterArme(Arme* arme)
{

}
void Bonhomme::ajouterArme(Arme* arme)
{

	vecArme.push_back(arme);
}
void Bonhomme::changerArme(Arme* arme)
{
	this->monArme = arme
		;
}
std::string Bonhomme::to_string()
{
	std::string info = "Voici les information de votre Aventurier \n";
	info.append("Nom : " + nom + "\n");
	info.append("Attaque : " + std::to_string(this->getAtt()) + "\n");
	info.append("Arme : " + monArme->to_string() + "\n");
	
	return info;
}
int Bonhomme::getAtt()
{
	return attaque + monArme->attaque;
}
Arme* Bonhomme::getArme(int arme)
{
	return vecArme[arme];
}
void Bonhomme::init()
{
	for (int i = 0; i < 3; i++)
	{
		vecArme.push_back(Factory::getRandomArme());
	}
}
std::vector<Arme*> Bonhomme::getVecArme()
{
	return vecArme;
}
void Bonhomme::afficherArme()
{
	int noVaisseau = 1;
	for (auto i = vecArme.begin(); i != vecArme.end(); i++)
	{
		std::cout << std::to_string(noVaisseau) << " " << (*i)->to_string() << std::endl;
		noVaisseau++;
	}
}