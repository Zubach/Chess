#pragma once
#include "Chessman.h"
#include <iostream> 
#include "TextureLoader.h"

class Game
{
	Chessman** field = new Chessman*[8];
	Game()
	{
		for (int i = 0; i < 8; i++) {
			field[i] = (Chessman*)malloc(8*sizeof(Chessman));
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
			
			}
		}
	}

};

