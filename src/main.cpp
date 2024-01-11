#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    float x = 0.0, y = 0.0;
    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);
    sf::Event event;

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(0,0);

    while (window.isOpen())
    {
        x+=1;
        y+=1;
        shape.setPosition(x,y);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseMoved)
            {
                //std::cout << "new mouse x: " << event.mouseMove.x << std::endl;
                //std::cout << "new mouse y: " << event.mouseMove.y << std::endl;
                //shape.setPosition(event.mouseMove.x, event.mouseMove.y);
            }

            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}