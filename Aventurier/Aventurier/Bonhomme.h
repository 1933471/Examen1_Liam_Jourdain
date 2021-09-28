#pragma once
#include "Arme.h"
#include <vector>
class Bonhomme
{
private:
	int attaque;
	int force;
	int orDispo;
	Arme* monArme;
	std::vector<Arme*> vecArme;
	void perdreOr(int orPerdu);
protected:
	std::string nom;
public:
	Bonhomme();
	~Bonhomme();

	int getAtt();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme);
	Arme* getArme(int choixArme);
	std::vector<Arme*> getVecArme();
	void init();
	void afficherArme();
	std::string to_string();

		
};

