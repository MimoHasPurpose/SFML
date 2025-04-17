#include <SFML/Graphics.hpp>
#include<iostream>
bool mouseWasReleased=false;
int main()
{
    sf::RenderWindow window(sf::VideoMode(400,400), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
   
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if(event.type==sf::Event::MouseButtonPressed){
                std::cout<<"mouse button pressed"<<std::endl;
            }
            mouseWasReleased=false;
            if(event.type==sf::Event::MouseButtonReleased){
                mouseWasReleased=true;
            }
        }

        if(sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)&& mouseWasReleased){
            std::cout<<"Left mouse button pressed"<<std::endl;
        }
      

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}