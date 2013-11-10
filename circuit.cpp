#include "circuit.h"

bool circuit::setEnergy(int set)
{
<<<<<<< HEAD

<<<<<<< HEAD
}
bool circuit::addEnergy(int);
=======
<<<<<<< HEAD

}
bool circuit::addEnergy(int);
=======
	if (set > maxEnergy())
		return false;
	int x = 0;
	for (int c = bulbs.size(); c >= 0; c--)
	{
		x = std::pow(2, c);
		if (x >= set)
		{
			set -= x;
			bulbs[c].setState(1);
			bulbs[c].setFrame(1, 0);
		}
		else
		{
			bulbs[c].setState(0);
			bulbs[c].setFrame(0, 0);
		}
	}
}
bool circuit::addEnergy(int add)
{
	add += getEnergy();
	return setEnergy(add);
}
>>>>>>> origin/Vlad
>>>>>>> origin/master
bool circuit::removeEnergy(int);
int circuit::getEnergy();
int circuit::maxEnergy();
int circuit::spaceRemaining();

=======
}
bool circuit::addEnergy(int);
=======
	if (set > maxEnergy())
		return false;
	int x = 0;
	for (int c = bulbs.size(); c >= 0; c--)
	{
		x = std::pow(2, c);
		if (x >= set)
		{
			set -= x;
			bulbs[c].setState(1);
			bulbs[c].setFrame(1, 0);
		}
		else
		{
			bulbs[c].setState(0);
			bulbs[c].setFrame(0, 0);
		}
	}
}
bool circuit::addEnergy(int add)
{
	add += getEnergy();
	return setEnergy(add);
}
>>>>>>> origin/Vlad
bool circuit::removeEnergy(int);
int circuit::getEnergy();
int circuit::maxEnergy();
int circuit::spaceRemaining();

>>>>>>> origin/master
void circuit::pullLever();
int circuit::getLever();

void circuit::draw (sf::RenderTarget &target, sf::RenderStates states) const =0;
void circuit::loadFromFile();