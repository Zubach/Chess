#pragma once
#include "Chessman.h"
class Knight :
    public Chessman
{
private:
    Knight();
    Knight(Team team, sf::Texture &texture);
};

