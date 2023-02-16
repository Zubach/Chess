#pragma once
#include "Chessman.h"
class Queen :
    public Chessman
{
private:
    Queen();
    Queen(Team team, sf::Texture& texture);
};

