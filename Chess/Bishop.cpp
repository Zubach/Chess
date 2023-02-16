#include "Bishop.h"

Bishop::Bishop(Team team, sf::Texture &texture):Chessman() {
	if (Team::Black == team) {

		sf::Sprite bishop;
		bishop.setTexture(texture);
		bishop.setTextureRect(sf::IntRect(1*size.x, 1, size.x, size.y));
		bishop.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = bishop;
	}
	else {
		sf::Sprite bishop;
		bishop.setTexture(texture);
		bishop.setTextureRect(sf::IntRect(1 * size.x*2, 1*size.y*2, size.x, size.y));
		bishop.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = bishop;
	}
	
}
