//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <iostream>
//#include <vector>
//#include <math.h>
//
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(800, 800), "ball shooter");
//	window.setFramerateLimit(60);
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
//			if (event.type == sf::Event::KeyPressed)
//				if (event.key.code == sf::Keyboard::Escape)
//				{
//					window.close();
//				}
//
//		}
//
//		window.clear(sf::Color(0, 150, 0));
//
//		window.display();
//
//	}
//
//	return 0;
//}