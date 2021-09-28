#include "Epee.h"
Epee::Epee() {
	nom = "Epee";
	attaque = 5;
	durabilite = 20;
	poids = 10;
}
std::string Epee::to_string()
{
	return "Je suis une epee";
}
Epee :: ~Epee() {

}