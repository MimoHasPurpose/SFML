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

    sf::Clock clock;
    while (window.isOpen())
    {
        //compute frame rate
        float ct=clock.restart().asSeconds();
        float fps=1.0f/(ct);
        std::cout<<"fps: "<<fps<<std::endl;
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
        window.setFramerateLimit(16);
    }

    return 0;
}