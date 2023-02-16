#pragma once
#include "Chessman.h"
class Rook :
    public Chessman
{
private:
    Rook();
    Rook(Team team, sf::Texture& texture);
};

