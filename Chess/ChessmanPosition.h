#pragma once
#include <string>
class ChessmanPosition
{
private:
	std::string position = "";
	char operator[](int index)noexcept;

public:
	void setPosition(std::string pos);
	inline std::string getPostion();
	void setX(char x);
	void setY(char y);
	inline char getX();
	inline char getY();
	ChessmanPosition();
	ChessmanPosition(std::string pos);
	static bool isCorrect(ChessmanPosition position);
	static bool isCorrect(std::string position);
};

