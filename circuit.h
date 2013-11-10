#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <SFML/Graphics.hpp>
#include "gameObject.h"
#include <vector>

class circuit
{
public:
	bool setEnergy(int);
	bool addEnergy(int);
	bool removeEnergy(int);
	int getEnergy();
	int maxEnergy();
	int spaceRemaining();

	void pullLever();
	int getLever();

	bool intersects(sf::IntRect);
	bool intersectsPlug(sf::IntRect);
	bool intersectsLever(sf::IntRect);

	virtual void draw (sf::RenderTarget &target, sf::RenderStates states) const =0;
	void loadFromFile();

private:
	std::vector<sf::RectangleShape> wires;
	int circuit_from[2];//0 = player
	gameObject Plug;

	std::vector<gameObject> Bulbs;

	gameObject Lever;
	int circuit_number;
}

#endif
