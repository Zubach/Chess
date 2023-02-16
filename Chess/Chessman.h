#pragma once
#include "ChessmanPosition.h"
#include <SFML/Graphics/Sprite.hpp>
#include "ChessmanManager.h"
#include <vector>
#include "TextureLoader.h"
enum Team
{
	Black, White
};


class Chessman abstract
{
protected:
	

	ChessmanPosition position;
	sf::Sprite sprite;
	Team team;
	std::vector<std::string> movementPositions;
	sf::Vector2f size;

	Chessman();
	Chessman(Team team);
	

	virtual void moveTo(ChessmanPosition position);
	inline void clearMovementPositions();
	inline void addMovementPositions(std::vector<std::string> positions);
	virtual Chessman& clone(Chessman& chessman) = 0;
private:
	Chessman(ChessmanPosition position, sf::Sprite sprite);

public:
	
	friend class ChessmanManager;
};


