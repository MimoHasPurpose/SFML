#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::Font font;
    font.loadFromFile("./oj.ttf");
    sf::Text text("Hello sexy monalisa",font,10);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        // window.draw(shape);
        window.draw(text);
        window.display();
    }

    return 0;
}