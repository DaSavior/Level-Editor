#include<SFML\Graphics.hpp>
#include <string>
#include <fstream>
#include "direction.h"

#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class gameObject: public sf::Sprite
{
public:
	void setState(int);
	void setAnimationId(int);
	void setObjectId(int);
	void setCollision(sf::IntRect = sf::IntRect());
	void setInteract(std::string = "");
	int getState() const;
	int getAnimationId() const;
	int getObjectId() const;
	sf::IntRect getCollisionRectangle() const;
	std::string getInteractText() const;

	bool collides() const;
	bool interacts() const;
	bool intersects(const gameObject&) const;
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> origin/Micah
=======
>>>>>>> origin/master
=======
>>>>>>> origin/master
	bool intersects(const IntRect&) const;
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/Vlad
<<<<<<< HEAD
<<<<<<< HEAD
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/master
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/master
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/master
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/Vlad
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/master
=======
	bool intersects(const sf::IntRect&) const;
>>>>>>> origin/master
=======
>>>>>>> origin/master
=======
>>>>>>> origin/master

	void setFrameSize(float, float);
	void setFrameSize(sf::Vector2f);
	void setFrame(float, float);
	void setFrame(sf::Vector2f);
	void moveFrame(float, float);
	sf::Vector2f getFrame() const;

	void loadFromFile(std::istream&);	//I would like to overload the >> operator 
	gameObject(std::ifstream&);	
	gameObject(const sf::Texture& = sf::Texture(), const sf::IntRect& = sf::IntRect(), int=0, int=0, int=0, const sf::IntRect& = sf::IntRect(), std::string = "");
private:
	int state;
	int animationId;
	int objectId;
	sf::IntRect collisionRectangle;
	std::string interactText;
};

#endif