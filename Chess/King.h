#pragma once
#include "Chessman.h"
class King :
    public Chessman
{
private:
    King();
    King(Team team, sf::Texture& texture);
};

