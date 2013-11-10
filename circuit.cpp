#include "circuit.h"

bool circuit::setEnergy(int set)
{
	if (set > maxEnergy())
		return false;
	int x = 0;
	for (int c = bulbs.size()-1; c >= 0; c--)
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
bool circuit::addEnergy(int plus)
{
	plus += getEnergy();
	return setEnergy(plus);
}
bool circuit::removeEnergy(int minus)
{
	minus = getEnergy() - minus;
	return setEnergy(minus);
}
int circuit::getEnergy()
{
	int total = 0;
	for (int c = 0; c < bulbs.size(); c++)
	{
		if (bulbs[c].getState == 1)
			total += std::pow(2, c);
	}
	return total;
}
int circuit::maxEnergy()
{
	return (pow(2, bulbs.size())-1);
}
int circuit::spaceRemaining()
{
	return (maxEnergy() - getEnergy());
}

void circuit::pullLever()
{
	switch (lever.getState())
	{
	case -1:
		lever.setState(0);
		break;
	case 0:
		lever.setState(1);
		break;
	case 1:
		lever.setState(-1);
		break;
	}
}
int circuit::getLever()
{

}

void circuit::draw (sf::RenderTarget &target, sf::RenderStates states) const =0;
void circuit::loadFromFile();