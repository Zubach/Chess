#include "Pawn.h"

Pawn::Pawn(Team team):Chessman(team) {
	if (Team::Black == team) {
		sf::Texture texture = TextureLoader::textureFromFile("images/chess.png");
		sf::Sprite pawn;
		pawn.setTextureRect(sf::IntRect(1, 1, size.x, size.y));
		pawn.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = pawn;
	}
	else {
		sf::Texture texture = TextureLoader::textureFromFile("images/chess.png");
		sf::Sprite pawn;
		pawn.setTextureRect(sf::IntRect(1*size.x*3, 1*size.y*2, size.x, size.y));
		pawn.scale(sf::Vector2f(0.5f, 0.5f));
		sprite = pawn;
	}
}
