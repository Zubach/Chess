#include "ChessmanPosition.h"

char ChessmanPosition::operator[](int index)noexcept
{
	if (position.size() > index)
		return position[index];
	return '\0';
}

void ChessmanPosition::setPosition(std::string pos) {
	if (ChessmanPosition::isCorrect(pos))
		position = pos;
}

void ChessmanPosition::setX(char x) {
	if (x >= 'A' && x <= 'H')
		position[0] = x;
}

void ChessmanPosition::setY(char y) {
	if (y >= '1' && y <= '8')
		position[1] = y;
}

inline std::string ChessmanPosition::getPostion() {
	return position;
}

inline char ChessmanPosition::getX(){
	return position[0];
}

inline char ChessmanPosition::getY(){
	return position[1];
}

ChessmanPosition::ChessmanPosition() {
	setPosition("A1");
}
ChessmanPosition::ChessmanPosition(std::string pos) {
	setPosition(pos);
}

bool ChessmanPosition::isCorrect(ChessmanPosition position)
{
	return position.position != "" && ((position[0] >= 'A' && position[0] <= 'H') && (position[1] >= '1' && position[1] <= '8'));
}

bool ChessmanPosition::isCorrect(std::string position)
{
	return position != "" && ((position[0] >= 'A' && position[0] <= 'H') && (position[1] >= '1' && position[1] <= '8'));
}
