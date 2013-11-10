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
			    mouse_pos = sf::Mouse:GetMousePosition();
			    if(new_object1.contains(mouse_pos))
                {

                }
                else if (delete_object.contains(mouse_pos))
                {

                }
                else if (save_room.contains(mouse_pos))
                {

                }
                else if (load_room.contains(mouse_pos))
                {

                }
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
