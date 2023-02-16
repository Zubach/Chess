#include "King.h"

King::King(Team team, sf::Texture& texture) :Chessman(team) {
	if (Team::Black == team) {
		sf::Sprite king;
		king.setTexture(texture);
		king.setTextureRect(sf::IntRect(1*size.x, 1 * size.y, size.x, size.y));
		king.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = king;
	}
	else {
		sf::Sprite king;
		king.setTexture(texture);
		king.setTextureRect(sf::IntRect(1 * size.x*2, 1 * size.y, size.x, size.y));
		king.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = king;
	}
}
