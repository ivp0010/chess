#include "class_headers.h"

zones::zones(){

    const float cellSize = 100.f;
    const float topBuffer = 100.f;

    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {

            float left = col * cellSize;
            float top  = topBuffer + row * cellSize;

            z.push_back(new sf::FloatRect(
                left,
                top,
                cellSize,
                cellSize
            ));
        }
    }
}


int zones::check_zones(sf::Vector2f mousePos){
	for (int i = 0; i < 64; i++){
		if (z[i]->contains(mousePos))
			return i;
	}
	return -1;
}
