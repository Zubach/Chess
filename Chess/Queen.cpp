#include "Queen.h"

Queen::Queen(Team team, sf::Texture& texture) :Chessman(team) {
	if (Team::Black == team) {

		sf::Sprite queen;
		queen.setTexture(texture);
		queen.setTextureRect(sf::IntRect(1, 1*size.y, size.x, size.y));
		queen.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = queen;
	}
	else {
		sf::Sprite queen;
		queen.setTexture(texture);
		queen.setTextureRect(sf::IntRect(1*size.x*3, 1 * size.y, size.x, size.y));
		queen.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = queen;
	}
}
