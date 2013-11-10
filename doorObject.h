#ifndef DOOR_OBJECT_H
#define DOOR_OBJECT_H

#include "gameObject.h"
class doorObject : public gameObject
{
public:
	void setAnswer(int);
	void setCircuitFrom(int);
	int getAnswer() const;
	int getCircuitFrom() const;

	void loadFromFile(std::istream&);
	doorObject(std::ifstream&);
	doorObject(const sf::Texture& = sf::Texture(), const sf::IntRect& = sf::IntRect(), int=0, int=0, int=0, const sf::IntRect& = sf::IntRect(), std::string = "", int=0, int=0);

private:
	int answer;
	int circuitFrom;
};

#endif