#ifndef ZONES_H
#define ZONES_H
#include "headers.h"

class zones{

	public:
	
		zones();
		int check_zones(sf::Vector2f mousePos);

	private:
		
		std::vector<sf::FloatRect*> z;
	
};

#endif
