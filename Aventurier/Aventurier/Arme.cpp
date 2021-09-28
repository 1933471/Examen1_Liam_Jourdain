#include "Arme.h"
Arme::Arme() : attaque(0), durabilite(0),poids(0)
{

}
Arme :: ~Arme() {

}
int Arme::getAtt()
{
	return attaque;
}
int Arme::getDur()
{
	return durabilite;
}
int Arme::getPoids()
{
	return poids;
}
int Arme::getValeur()
{
	return valeur;
}
std::string Arme::getNom()
{
	return nom;
}
std::string Arme::to_string()
{
	std::string info = "Voici les information de votre Arme \n";
	info.append("Nom :" + nom + "\n");
	info.append("Attaque :" + std::to_string(this->getAtt()) + "\n");
	info.append("Durabilite :" + std::to_string(this->getDur()) + "\n");
	info.append("Poids :" + std::to_string(this->getPoids()) + "\n");

	return info;
}