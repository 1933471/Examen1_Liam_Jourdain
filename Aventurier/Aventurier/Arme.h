#pragma once
#include <string>
using namespace std;
class Arme
{
private:
	int valeur = 50;

protected:
	
	int durabilite = 0;
	float poids = 0;
	std::string nom;
	enum RARETE{COMMUN,RARE,EPIQUE,LEGENDAIRE};

public:
	Arme();
	~Arme();

	int getValeur();
	int getAtt();
	int getDur();
	int getPoids();
	std::string getNom();
	RARETE getRarete();
	int attaque = 0;

	string to_string();
	
};

