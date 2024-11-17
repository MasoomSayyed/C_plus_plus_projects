//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <iostream>
//#include <vector>
//#include <math.h>
//
//class Bullet
//{
//public:
//	sf::CircleShape ammo;
//	sf::Vector2f curVelocity;
//	float maxSpeed;
//
//	Bullet(float radius = 5.0f)
//		:curVelocity(0.f, 0.f),maxSpeed(15.0f)
//	{
//		ammo.setRadius(radius);
//		ammo.setFillColor(sf::Color::Yellow);
//	}
//};
//
// int main()
// {
//	sf::RenderWindow window(sf::VideoMode(800, 800), "ball shooter");
//	window.setFramerateLimit(60);
//
//	//player
//	sf::CircleShape player(30.0f);
//	player.setFillColor(sf::Color::Red);
//
//	//ammo
//	Bullet b;
//	std::vector<Bullet> bullets;
//	bullets.push_back(b);
//
//	//enemy
//
//	//vectors
//	sf::Vector2f playerCenter;
//	sf::Vector2f mousePosWindow;
//	sf::Vector2f aimDir;
//	sf::Vector2f aimDirNorm;
//	
//
//
// while (window.isOpen())
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
//			if(event.type==sf::Event::KeyPressed)
//				if (event.key.code == sf::Keyboard::Escape)
//				{
//					window.close();
//				}
//
//		}
//		//update
//
//		//vector
//		playerCenter = sf::Vector2f(player.getPosition().x + player.getRadius(), player.getPosition().y + player.getRadius());
//		mousePosWindow = sf::Vector2f(sf::Mouse::getPosition(window));
//		aimDir = mousePosWindow - playerCenter;
//		aimDirNorm.x = aimDir.x / sqrt(pow(aimDir.x, 2) + pow(aimDir.y, 2));
//		aimDirNorm.y = aimDir.y / sqrt(pow(aimDir.x, 2) + pow(aimDir.y, 2));
//
//		
//		//player move
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
//			player.move(0.0f, -10.0f);
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
//			player.move(-10.0f, 0.0f);
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
//			player.move(0.0f, 10.0f);
//		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
//			player.move(10.0f, 0.0f);
//
//		//shooting
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
//		{
//			b.ammo.setPosition(playerCenter);
//			b.curVelocity = aimDirNorm * b.maxSpeed;
//
//			bullets.push_back(b);
//		}
//
//		for (size_t i = 0;i < bullets.size();i++)
//		{
//			bullets[i].ammo.move(bullets[i].curVelocity);
//			
//			if(bullets[i].ammo.getPosition().x < 0 || bullets[i].ammo.getPosition().y < 0 || bullets[i].ammo.getPosition().x > window.getSize().x || bullets[i].ammo.getPosition().y > window.getSize().y)
//				{
//				bullets.erase(bullets.begin() + i);
//				}
//		}
// 
//      window.clear(sf::Color(0,150,0));
//
//	  //draw
//	  window.draw(player);
//	  
//	  for (size_t i = 0; i < bullets.size(); i++)
//	  {
//		  window.draw(bullets[i].ammo);
//	  }
//
//	  window.display();
//		
//	}
//
// 	return 0;
// }