#include "Pawn.h"

Pawn::Pawn(Team team, sf::Texture &texture):Chessman(team) {
	if (Team::Black == team) {
		
		sf::Sprite pawn;
		pawn.setTexture(texture);
		pawn.setTextureRect(sf::IntRect(1, 1, size.x, size.y));
		pawn.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = pawn;
	}
	else {
		sf::Sprite pawn;
		pawn.setTexture(texture);
		pawn.setTextureRect(sf::IntRect(1*size.x*3, 1*size.y*2, size.x, size.y));
		pawn.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = pawn;
	}
}
