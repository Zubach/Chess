#include "Chessman.h"

inline void Chessman::clearMovementPositions()
{
	movementPositions.clear();
}

inline void Chessman::addMovementPositions(std::vector<std::string> positions)
{
	movementPositions.insert(std::end(movementPositions), std::begin(positions), std::end(positions));
}

void Chessman::moveTo(ChessmanPosition position)
{
	if (ChessmanPosition::isCorrect(position))
		this->position = position;
}
