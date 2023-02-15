#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
class TextureLoader
{

public:
	static sf::Texture textureFromFile(const char* filename);
};

