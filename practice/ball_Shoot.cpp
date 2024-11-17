//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//
//
//int main()
//{
//	int dir = 0;
//	bool isShot = false;
//	
//	sf::RenderWindow window(sf::VideoMode(800, 800), "vertex tiles");
//	window.setFramerateLimit(60);
//
//	sf::CircleShape enemy;
//	enemy.setPosition(200.0f, 100.0f);
//	enemy.setRadius(50.0f);
//	enemy.setPointCount(5);
//	enemy.setFillColor(sf::Color::Red);
//
//	sf::CircleShape ball;
//	ball.setRadius(20.0f);
//	ball.setFillColor(sf::Color::Blue);
//	
//
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
//		//ball
//
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
//		{
//			isShot = true;
//		}
//
//		if (!isShot)
//		{
//			ball.setPosition(sf::Mouse::getPosition(window).x, window.getSize().x - 100);
//		}
//		else
//			ball.move(0.0f, -8.0f);
//
//		//ball collisions
//		if (ball.getPosition().y < 0 || ball.getGlobalBounds().intersects(enemy.getGlobalBounds()))
//		{
//			
//			if (ball.getGlobalBounds().intersects(enemy.getGlobalBounds()))
//			{
//				enemy.setRadius(enemy.getRadius() - 10.0f);
//			}
//			isShot = false;
//		}
//
//		//enemy
//		enemy.rotate(1.0f);
//		enemy.setOrigin(sf::Vector2f(enemy.getRadius(), enemy.getRadius()));
//
//		if ( enemy.getPosition().x + enemy.getRadius()>= window.getSize().x)
//		{
//			dir = 1;
//		}
//		else if (enemy.getPosition().x - enemy.getRadius() <= 0 )
//		{
//			dir = 0;
//		}
//
//		switch(dir)
//		{
//		case 0:
//			enemy.move(3.0f, 0);
//			break;
//		case 1:
//			enemy.move(-3.0f, 0);
//			break;
//		default:
//			break;
//
//		}
//
//		window.clear(sf::Color::Cyan);
//
//		window.draw(enemy);
//		window.draw(ball);
//
//		window.display();
//		
//	}
//
//	return 0;
//}
//
//
