#pragma once
#include "ChessmanPosition.h"
#include <SFML/Graphics/Sprite.hpp>
#include "ChessmanManager.h"
#include <vector>
class Chessman abstract
{
protected:
	ChessmanPosition position;
	sf::Sprite sprite;
	std::vector<std::string> movementPositions;


	virtual void moveTo(ChessmanPosition position);
	inline void clearMovementPositions();
	inline void addMovementPositions(std::vector<std::string> positions);
	virtual Chessman& clone(Chessman& chessman) = 0;
private:
	Chessman();
	Chessman(ChessmanPosition position, sf::Sprite sprite);

public:

	friend class ChessmanManager;
};

