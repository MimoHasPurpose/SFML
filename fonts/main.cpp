#include <SFML/Graphics.hpp>
#include<iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(400,400), "SFML works!");
    window.setPosition({600,300});
    sf::Font font;
    font.loadFromFile("./oj.ttf");
    sf::Text text("Hello sexy",font,35);
    text.move(35.0f,0.0f);
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