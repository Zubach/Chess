#pragma once
#include "Chessman.h"
class Pawn :
    public Chessman
{
private:
	Pawn();
	Pawn(Team team, sf::Texture &texture);
};

