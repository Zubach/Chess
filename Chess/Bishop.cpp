#include "Bishop.h"

Bishop::Bishop() {
	sf::Texture texture = TextureLoader::textureFromFile("images/chess.png");
	sf::Sprite bishop;
	bishop.setTextureRect(sf::IntRect(10, 10, 445, 640));
	bishop.scale(sf::Vector2f(0.5f, 0.5f));
	sprite = bishop;
}
