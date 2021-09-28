#include "Arc.h"
Arc::Arc() {
	nom = "Arc";
	attaque = 5;
	durabilite = 40;
	poids = 8;
}
std::string Arc::to_string()
{
	return "Je suis un Arc";
}
Arc::~Arc()
{

}