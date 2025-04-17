#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800,800), "OpenGL");

// it works out of the box
    glEnable(GL_TEXTURE_2D);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.type==sf::Event::MouseButtonPressed)
                std::cout<<"Mouse button presed duhhh"<<std::endl;

                if(event.type==sf::Event::KeyReleased){
                std::cout<<"A key was pressed"<<std::endl;
                if(event.key.code==sf::Keyboard::W)
                    std::cout<<"specifically w is clicked"<<std::endl;
            }
        
            if(event.type==sf::Event::KeyReleased){
                if(event.key.code==sf::Keyboard::Escape)
                {
                    window.close();
                }
            }
            
            
        }


        window.clear();
        
        
        sf::CircleShape shape(50.f);
        // set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));
        window.draw(shape);
        window.display();
    }

    return 0;
}