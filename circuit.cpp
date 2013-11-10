#include "circuit.h"

bool circuit::setEnergy(int set)
{
	if (set > maxEnergy())
		return false;
	int x = 0;
	for (int c = Bulbs.size()-1; c >= 0; c--)
	{
		x = std::pow(2, c);
		if (x >= set)
		{
			set -= x;
			Bulbs[c].setState(1);
			Bulbs[c].setFrame(1, 0);
		}
		else
		{
			Bulbs[c].setState(0);
			Bulbs[c].setFrame(0, 0);
		}
	}
}
bool circuit::addEnergy(int plus)
{
	if (Lever.getState() != 0)
		return false;
	plus += getEnergy();
	return setEnergy(plus);
}
bool circuit::removeEnergy(int minus)
{
	if (Lever.getState() != 0)
		return false;
	minus = getEnergy() - minus;
	return setEnergy(minus);
}
int circuit::getEnergy()
{
	int total = 0;
	for (int c = 0; c < Bulbs.size(); c++)
	{
		if (Bulbs[c].getState == 1)
			total += std::pow(2, c);
	}
	return total;
}
int circuit::maxEnergy()
{
	return (pow(2, Bulbs.size())-1);
}
int circuit::spaceRemaining()
{
	return (maxEnergy() - getEnergy());
}

void circuit::pullLever()
{
	switch (Lever.getState())
	{
	case -1:
		Lever.setState(0);
		Lever.setFrame(0,0);
		break;
	case 0:
		Lever.setState(1);
		Lever.setFrame(1,0);
		break;
	case 1:
		Lever.setState(-1);
		Lever.setFrame(2,0);
		break;
	}
}
int circuit::getLever()
{
	return Lever.getState();
}

bool circuit::intersects(sf::IntRect rect)
{
	if (intersectsPlug(rect))
		return true;
	if (intersectsLever(rect))
		return true;
	for (int c = 0; c < Bulbs.size(); c++)
		if (Bulbs[c].intersects(rect))
			return true;

	return false;
}
bool circuit::intersectsPlug(sf::IntRect rect)
{
	if (Plug.intersects(rect))
		return true;
}
bool circuit::intersectsLever(sf::IntRect rect)
{
	if (Lever.intersects(rect))
		return true;
}

void circuit::draw (sf::RenderTarget &target, sf::RenderStates states) const
{
	if (Plug.getState() != 0)
		target.draw(Plug, states);
	if (Plug.getState() != 2)
		target.draw(Lever, states);

	for (int c = 0; c < Bulbs.size(); c++)
		target.draw(Bulbs[c], states);
}
void circuit::loadFromFile()
{
	return;	//needs to be written
}