//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//void update(int &keyTime,sf::RectangleShape& square ,sf::RenderWindow& window);
//void draw(sf::RenderWindow &window, sf::RectangleShape& square);
//
//int main()
//{
//	int keyTime = 8;
//
//	sf::RenderWindow window(sf::VideoMode(800, 800), "vertex tiles");
//	window.setFramerateLimit(60);
//
//	sf::RectangleShape square(sf::Vector2f(100.0f, 100.0f));
//	square.setFillColor(sf::Color::Magenta);
//	square.setPosition(window.getSize().x / 2 - square.getSize().x/2, window.getSize().y / 2 - square.getSize().y/2);
//
//	while (window.isOpen())
//	{
//		sf::Event event;
//
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//			{
//				window.close();
//			}
//
//		}
//
//		update(keyTime,square,window);
//		draw(window, square);
//	}
//	
//	return 0;
//}
//
//void update(int& keyTime,sf::RectangleShape& square, sf::RenderWindow& window)
//{
//	if (keyTime < 8)
//		keyTime++;
//	
//
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && square.getPosition().y > 0)
//	{
//		square.move(0.0f, -10.0f);
//		keyTime = 0;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && square.getPosition().x > 0)
//	{
//		square.move(-10.f, 0.f);
//		keyTime = 0;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && square.getPosition().y  + square.getSize().y < window.getSize().y)
//	{
//		square.move(0.0f, 10.0f);
//		keyTime = 0;
//	}
//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && square.getPosition().x  + square.getSize().x < window.getSize().x)
//	{
//		square.move(10.0f, 0.0f);
//		keyTime = 0;
//	}
//
//	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
//	{
//		square.setFillColor(sf::Color::Green);
//	}
//	else
//		square.setFillColor(sf::Color::Magenta);
//}
//
//void draw(sf::RenderWindow& window, sf::RectangleShape& square)
//{
//	window.clear(sf::Color::Cyan);
//	//draw
//	window.draw(square);
//	window.display();
//}
//
