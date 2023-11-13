// Read more at https://www.sfml-dev.org/tutorials/2.6/start-vc.php

#include <SFML/Graphics.hpp>

namespace app
{

struct World
{
    sf::Font font;
    sf::CircleShape shape;
    sf::Text framerate;
};

void Init(World& world)
{
	world.shape.setRadius(288.0f);
	world.shape.setFillColor(sf::Color::Magenta);

    if (world.font.loadFromFile("assets/font/monogram-extended.ttf"))
    {
        world.framerate.setFont(world.font); // font is a sf::Font
        world.framerate.setFillColor(sf::Color::Red);
    }
}

void Update(const sf::Time& detlaTime, World& world)
{
    float fps = 1.0f / detlaTime.asSeconds();
    char fpsValue[8];
    _itoa_s((int)fps, fpsValue, 10);
    world.framerate.setString(fpsValue);
}

void Draw(const World& world, sf::RenderWindow& window)
{
	window.draw(world.shape);
    window.draw(world.framerate);
}

} // namespace app

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 576), "SFML 2.6.1 VS2022");
    sf::Clock clock;
    window.setFramerateLimit(30);

    app::World world{};
    app::Init(world);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        sf::Time deltaTime = clock.restart();
        app::Update(deltaTime, world);
        app::Draw(world, window);
        window.display();
    }

    return 0;
}