#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <fstream>
#include <vector>


class rect
{
public:
	//a circle
	sf::CircleShape circle;
	float x, y;
	float radius;
	int r, g, b;

	std::vector<sf::CircleShape> circles;

	
	void run()
	{
		

		std::ifstream fin("values.txt");

		std::string token;
		

		while (fin >> token)
		{
			if (token == "circle")
			{
				fin >> radius;
				circle.setRadius(radius);

				fin >> x >> y;
				circle.setPosition(x, y);

				fin >> r >> g >> b;
				circle.setFillColor(sf::Color(r, g, b));
			}

			circles.push_back(circle);

		}
	}

};

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "ball shooter");
	window.setFramerateLimit(60);

	rect obj;
	obj.run();

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			if (event.type == sf::Event::KeyPressed)
				if (event.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}

		}

		for (size_t i = 0; i < obj.circles.size(); i++)
		{
			obj.circles[i].move(.5, .5);
		}
		

		window.clear(sf::Color(0, 150, 0));

		for (auto& e : obj.circles)
		{
			window.draw(e);
		}
		
		

		window.display();

	}

	return 0;
}