#include "Rook.h"

Rook::Rook(Team team, sf::Texture& texture) :Chessman(team) {
	if (Team::Black == team) {

		sf::Sprite rook;
		rook.setTexture(texture);
		rook.setTextureRect(sf::IntRect(1*size.x*2, 1, size.x, size.y));
		rook.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = rook;
	}
	else {
		sf::Sprite rook;
		rook.setTexture(texture);
		rook.setTextureRect(sf::IntRect(1*size.x, 1*size.y*2, size.x, size.y));
		rook.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = rook;
	}
}
