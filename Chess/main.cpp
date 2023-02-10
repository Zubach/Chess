#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    
    std::ifstream texture_file{ "images/chess.png", std::ifstream::binary };
    std::vector<char> buffer;
    if (texture_file) {
        // get length of file:
        texture_file.seekg(0, texture_file.end);
        const auto length = texture_file.tellg();
        if (!length) {
            std::cerr << "Cannot load zero byte texture file" << std::endl;
            return EXIT_FAILURE;
        }
        buffer.resize(length); // reserve space

        texture_file.seekg(0, texture_file.beg);

        auto start = &*buffer.begin();
        texture_file.read(start, length);
        texture_file.close();
    }
    else {
        std::cerr << "Could not open texture file" << std::endl;
        return EXIT_FAILURE;
    }

    sf::Texture texture;
    if (!texture.loadFromMemory(&buffer[0], buffer.size())) {
        std::cerr << "Texture load failed" << std::endl;
        return EXIT_FAILURE;
    }

    sf::Sprite pawn;
    pawn.setTexture(texture);
    pawn.setTextureRect(sf::IntRect(10, 10, 445, 640));
    pawn.setPosition(10, 10);
    pawn.scale(sf::Vector2f(0.5f, 0.5f));
   

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(pawn);
        window.display();
    }
   
    return 0;
}