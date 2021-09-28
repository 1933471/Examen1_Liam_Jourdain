#pragma once
#include <vector>
#include"Arme.h"
class Marchand
{
private:
	std::vector<Arme*> vecArme;
public:
	int getPrix();
	void remplirVecArme();

	void AfficherArme();
	std::vector<Arme*> getVecArme();
};

