#include "Knight.h"

Knight::Knight(Team team, sf::Texture& texture) :Chessman(team) {
	if (Team::Black == team) {

		sf::Sprite knight;
		knight.setTexture(texture);
		knight.setTextureRect(sf::IntRect(1 * size.x * 3, 1, size.x, size.y));
		knight.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = knight;
	}
	else {
		sf::Sprite knight;
		knight.setTexture(texture);
		knight.setTextureRect(sf::IntRect(1, 1*size.y*2, size.x, size.y));
		knight.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = knight;
	}
}