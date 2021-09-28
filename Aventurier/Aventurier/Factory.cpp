#include "Factory.h"
#include "Arc.h"
#include "Epee.h"
#include "Lance.h"
#include <ctime>
#include < cstdlib >
enum class TypeArme
{
	LANCE = 1,
	ARC = 2,
	EPEE = 3
};

Arme* Factory::getRandomArme()
{
	Arme* arme(0);

	TypeArme typeA = (TypeArme)((rand() % (3 - 1 + 1)) + 1);
	if (typeA == TypeArme::LANCE)
		arme = new Lance();
	else if (typeA == TypeArme::ARC)
		arme = new Arc();
	else
		arme = new Epee();

	return arme;
}
