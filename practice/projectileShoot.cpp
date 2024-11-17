//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <vector>
//
//
//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(800, 800), "ball shooter");
//	window.setFramerateLimit(60);
//	
//	//textures
//	sf::Texture enemy1;
//	sf::Texture p1;
//	sf::Texture ammo;
//
//	if (!enemy1.loadFromFile("textures/Mushroom.png"))
//	{
//		std::cout << "error loading textures";
//		return 0;
//	}
//
//	//sprite
//	sf::Sprite enemySprite;
//	enemySprite.setTexture(enemy1);
//	enemySprite.scale(.5f,.5f);
//	
//	//hp bar
//	int hp = 10;
//	sf::RectangleShape hpBar;
//	hpBar.setFillColor(sf::Color(0,0,255,100));
//	hpBar.setSize(sf::Vector2f(20.0f,(float)hp * 20.0f));
//	hpBar.setPosition(10.0f,(window.getSize().y / 2) - hpBar.getSize().y);
//
//	//player
//	sf::CircleShape player;
//	player.setRadius(30.0f);
//	player.setFillColor(sf::Color::Yellow);
//	sf::Vector2f playerCenter;
//	int shootTimer = 0;
//
//	//bullets
//	sf::CircleShape bullet;
//	bullet.setFillColor(sf::Color::Black);
//	bullet.setRadius(4.0f);
//
//	std::vector<sf::CircleShape> bullets;
//	
//
//	//enemy
//	int spawnTimer = 0;
//	sf::RectangleShape enemy;
//	enemy.setFillColor(sf::Color::Red);
//	enemy.setSize(sf::Vector2f (50.0f, 50.0f));
//
//	std::vector<sf::Sprite> enemies;
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
//			if(event.type==sf::Event::KeyPressed)
//				if (event.key.code == sf::Keyboard::Escape)
//				{
//					window.close();
//				}
//
//		}
//		
//		//update
//		playerCenter = sf::Vector2f(player.getPosition().x + player.getRadius(), player.getPosition().y + player.getRadius());
//		player.setPosition(sf::Mouse::getPosition(window).x, 700);
//		if (shootTimer < 11)
//		{
//			shootTimer++;
//		}
//		//shoot
//		if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && shootTimer > 10)
//		{
//			bullet.setPosition(playerCenter);
//			bullets.push_back(sf::CircleShape(bullet));
//
//			shootTimer = 0;
//		}
//
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			bullets[i].move(0.f, -10.0f);
//
//			if (bullets[i].getPosition().y < 100)
//			{
//				bullets.erase(bullets.begin() + i);
//			}
//		}
//
//
//		//enemyspawn
//		if (spawnTimer < 101)
//		{
//			spawnTimer++;
//		}
//		if (spawnTimer > 100)
//		{
//			enemySprite.setPosition(rand()%int(window.getSize().x - enemy1.getSize().x), 50);
//			enemies.push_back(enemySprite);
//
//			spawnTimer = 0;
//		}
//
//		for (size_t i = 0; i < enemies.size(); i++)
//		{
//			enemies[i].move(0.f, 3.0f);
//
//		}
//
//		//bullet collides
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			for (size_t k = 0; k < enemies.size(); k++)
//			{
//				if (bullets[i].getGlobalBounds().intersects(enemies[k].getGlobalBounds()))
//				{
//					bullets.erase(bullets.begin() + i);
//					enemies.erase(enemies.begin() + k);
//					break;
//				}
//			}
//		}
//
//		//player collides
//		
//			for (size_t k = 0; k < enemies.size(); k++)
//			{
//				if (enemies[k].getGlobalBounds().intersects(player.getGlobalBounds()))
//				{
//					std::cout << hpBar.getPosition().x << " " << hpBar.getPosition().y << "\n";
//					--hp;
//					enemies.erase(enemies.begin() + k);
//					hpBar.setPosition(10.0f, (float)(window.getSize().y / 2) - hpBar.getSize().y);
//					
//				}
//			}
//
//		//hp shrink
//			hpBar.setSize(sf::Vector2f(20, (float)hp * 20 ));
//			
//			if (hp == 0)
//			{
//				window.close();
//			}
//		
//
//		window.clear(sf::Color::Cyan);
//
//		window.draw(hpBar);
//	
//		for (size_t i = 0; i < bullets.size(); i++)
//		{
//			window.draw(bullets[i]);
//		}
//
//		window.draw(player);
//		
//
//		for (size_t i = 0; i < enemies.size(); i++)
//		{
//			window.draw(enemies[i]);
//		} 
//		window.display();
//		
//	}
//
//	return 0;
//}
//
//
