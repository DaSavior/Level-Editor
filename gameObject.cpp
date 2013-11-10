#include "gameObject.h"

void gameObject::setState(int newState)
{
	state = newState;
	return;
}
void gameObject::setAnimationId(int newAnimationId)
{
	animationId = newAnimationId;
	return;
}
void gameObject::setObjectId(int newObjectId)
{
	objectId = newObjectId;
	return;
}
void gameObject::setCollision(sf::IntRect newCollisionRectangle)
{
	collisionRectangle = newCollisionRectangle;
	return;
}
void gameObject::setInteract(std::string newInteractText)
{
	interactText = newInteractText;
	return;
}
int gameObject::getState() const
{
	return state;
}
int gameObject::getAnimationId() const
{
	return animationId;
}
int gameObject::getObjectId() const
{
	return objectId;
}
sf::IntRect gameObject::getCollisionRectangle() const
{
	return collisionRectangle;
}
std::string gameObject::getInteractText() const
{
	return interactText;
}

bool gameObject::collides() const
{
	if (collisionRectangle == sf::IntRect())
		return false;
	return true;
}
bool gameObject::interacts() const
{
	if (interactText == "")
		return false;
	return true;
}
bool gameObject::intersects(const gameObject& other) const
{
	if (other.collides() && collides())
		return collisionRectangle.intersects(other.collisionRectangle);
	return false;
}
bool gameObject::intersects(const sf::IntRect& other) const
{
	if (collides())
		return collisionRectangle.intersects(other);
	return false;
}
void gameObject::setFrameSize(float x, float y)
{
	setTextureRect(sf::IntRect(getPosition().x, getPosition().y, x, y));
	return;
}
void gameObject::setFrameSize(sf::Vector2f size)
{
	setTextureRect(sf::IntRect(getPosition().x, getPosition().y, size.x, size.y));
	return;
}
void gameObject::setFrame(float x, float y)
{
	float width = getTextureRect().width;
	float height = getTextureRect().height;
	x *= width;
	y *= height;
	setTextureRect(sf::IntRect(x, y, width, height));
	return;
}
void gameObject::setFrame(sf::Vector2f frame)
{
	setFrame(frame.x, frame.y);
	return;
}
void gameObject::moveFrame(float x, float y)
{
	x += getFrame().x;
	y += getFrame().y;
	setFrame(x, y);
	return;
}
sf::Vector2f gameObject::getFrame() const
{
	int x = getTextureRect().left;
	if (getTextureRect().width != 0)
		x /= getTextureRect().width;
	else
		x = 0;
	int y = getTextureRect().top;

	if (getTextureRect().width != 0)
		x /= getTextureRect().width;
	else
		x = 0;
	return sf::Vector2f(x, y);
}

void gameObject::loadFromFile(std::istream& file)
{
	return;
}
gameObject::gameObject(std::ifstream& file)
{
	loadFromFile(file);
	return;
}
gameObject::gameObject(const sf::Texture& texture, const sf::IntRect& rectangle, int newState, int newAnimationId, int newObjectId, const sf::IntRect& newCollisionRectangle, std::string newInteractText)
{
	Sprite(texture, rectangle);
	setState(newState);
	setAnimationId(newAnimationId);
	setObjectId(newObjectId);
	setCollision(newCollisionRectangle);
	setInteract(newInteractText);
	return;
}