#include "TextureLoader.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    
    sf::Texture texture;
    texture = TextureLoader::textureFromFile("images/chess.png");

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