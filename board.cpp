#include "headers.h"
#include "board.h"

board::board(){
	
	float y = 100.f;
	float x = 0.f;
	bool dark_square = false;
	for (int i = 0; i < 8; i++){
		
		for (int j = 0; j < 8; j++){

			sf::RectangleShape* temp = new sf::RectangleShape(sf::Vector2f{100.f, 100.f});
			temp->setPosition(x, y);
			if (dark_square){
				temp->setFillColor(sf::Color::Black);
				dark_square = false;
			}
			else{
				temp->setFillColor(sf::Color::White);
				dark_square = true;
			}
			b.push_back(temp);
			
			x += 100.f;
		}
		
		if (dark_square)
			dark_square = false;
		else
			dark_square = true;
		x = 0.f;
		y += 100.f;
	}
	
	sf::RectangleShape* topBar = new sf::RectangleShape(sf::Vector2f{800.f, 100.f});
	topBar->setFillColor(sf::Color::Red);
	topBar->setPosition(0.f, 0.f);
	b.push_back(topBar);
}

void board::draw_board(sf::RenderWindow &window){
	for (int i = 0; i < 65; i++)
		window.draw(*(b[i]));



}
