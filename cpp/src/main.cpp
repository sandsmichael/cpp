#include "stdio.h"
#include "iostream"

#include <SFML/Graphics.hpp>

int main()
{

    std::cout << "[Init]" << std::endl;

    // blue circle
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML Window Title");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Blue);



    // Create texture from PNG file
    sf::Texture texture;
    if (!texture.loadFromFile("assets/sprite.png"))
    {
        std::cerr << "Error while loading texture" << std::endl;
        return -1;
    }
    std::cout << "[File Read into Memory]" << std::endl;

    //if (!texture.create(200, 200))
    //{
    //    // error...
    //}
    // Enable the smooth filter. The texture appears smoother so that pixels are less noticeable.
    texture.setSmooth(true);

    // Create the sprite and apply the texture
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sf::FloatRect spriteSize = sprite.getGlobalBounds();
    sprite.setOrigin(spriteSize.width / 2., spriteSize.height / 2.);
    sprite.setColor(sf::Color(0, 255, 0, 128)); // green



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window and apply grey background
        window.clear(sf::Color(127, 127, 127));

        // Rotate and draw the sprite
        sprite.setPosition(50, 50);
        window.draw(sprite);

        window.display();
    }
    std::cout << "Window has been closed" << std::endl;




    return 0;
}