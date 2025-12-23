#include "headers.h"
#include "class_headers.h"

int main(){

	sf::RenderWindow window(sf::VideoMode(800, 900), "chess");
	window.clear(sf::Color::White);
	board b;
	zones z;
	b.draw_board(window);
	window.display();

	while (window.isOpen()){

		sf::Event event;
        	while (window.pollEvent(event))
        	{
        	    if (event.type == sf::Event::Closed)
        	        window.close();
        	}

		if(event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
		
			sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			int pos = z.check_zones(mousePos);
			std::cout << pos << std::endl;	
		}
	}

	
	return 0;
}
