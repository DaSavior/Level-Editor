
#include "circuit.h"
#include "doorObject.h"
#include "gameObject.h"
#include "map.h"
#include "puzzle.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Level Editor");
	sf::Event event;

	while(window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::MouseButtonPressed:
				break;
			case sf::Event::TextEntered:
				break;
			case sf::Event::KeyPressed:
				break;
			}
		}
	}

	window.clear(sf::Color::Magenta);
	
	window.display();
	return 0;
}