#include "Lance.h"
Lance::Lance() {
	nom = "Lance";
	attaque = 8;
	durabilite = 20;
	poids = 15;
	
}
std::string Lance::to_string()
{
	return "Je suis une lance";
}
Lance :: ~Lance()
{

}