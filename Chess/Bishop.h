#pragma once
#include "Chessman.h"
class Bishop :
    public Chessman
{
private:
    Bishop();
    Bishop(Team team, sf::Texture &texture);
};

