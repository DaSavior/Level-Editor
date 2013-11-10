#include "doorObject.h"

void doorObject::setAnswer(int newAnswer)
{
	answer = newAnswer;
}
void doorObject::setCircuitFrom(int newCircuitFrom)
{
	circuitFrom = newCircuitFrom;
}
int doorObject::getAnswer() const
{
	return answer;
}
int doorObject::getCircuitFrom() const
{
	return circuitFrom;
}

void doorObject::loadFromFile(std::istream& file)
{
	return; //THIS NEEDS TO BE MADE
}
doorObject::doorObject(std::ifstream& file)
{
	loadFromFile(file);
	return;
}
doorObject::gameObject(const sf::Texture& texture, const sf::IntRect& rectangle, int newState, int newAnimationId, int newObjectId, const sf::IntRect& newCollisionRectangle, std::string newInteractText, int newAnswer, int newCircuitFrom)
{
	gameObject(texture, rectangle, newState, newAnimationId, newObjectId, newCollisionRectangle, newInteractText);
	setAnswer(newAnswer);
	setCircuitFrom(newCircuitFrom);
	return;
}
}
