

// 
#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(400,400), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture texture;
    texture.loadFromFile("./sexylisa.jpg");
    sf::Sprite sprite(texture);
    sprite.setScale(0.5f,0.5f);
    float xp;
    xp=0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

           
        }

        sprite.setPosition(xp,0.0f);
        xp=xp+0.01;
        if(xp>30){
            xp=0;
        }
        window.clear();
        window.draw(shape);
        window.draw(sprite);
        window.display();
    }

    return 0;
}