#ifndef BOARD_H
#define BOARD_H
#include "headers.h"

class board{

	public:

		board();
		void draw_board(sf::RenderWindow &window);

	private:

		std::vector<sf::RectangleShape*> b;	


};


#endif
