#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800,800), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)){
            std::cout<<"Left mouse button pressed"<<std::endl;
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}