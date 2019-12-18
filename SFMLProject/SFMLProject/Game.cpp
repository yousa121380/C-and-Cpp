#include "Game.h"

Game::Game():window(sf::VideoMode(320, 480), "The Game!"), timer(0.0f),delay(0.5f)
{

}

void Game::run()
{
	while (window.isOpen())
	{
		float time = clock.getElapsedTime().asSeconds();
		clock.restart();
		timer += time;
		processEvents();
		update();
		shape.checkLine();
		render();
		delay = 0.5f;
	}
}

void Game::processEvents()
{
	sf::Event e;
	while (window.pollEvent(e))
	{
		if (e.type == sf::Event::Closed) window.close();

		if (e.type == sf::Event::KeyPressed)
		{
			if (e.key.code == sf::Keyboard::Up)
			{
				std::cout << "ok";
				shape.rotateit();
			}
			else if (e.key.code == sf::Keyboard::Left) shape.moveit(1,-1);
			else if (e.key.code == sf::Keyboard::Right) shape.moveit(1,1);
			else if (e.key.code == sf::Keyboard::Down) delay = 0.05f;
		}
	}
}

void Game::update()
{
	if (timer > delay)
	{
		shape.moveit(2, 1);
		shape.newShape();
		timer = 0;
	}
}

void Game::render()
{
	window.clear(sf::Color::White);
	window.draw(background.background);

	sf::Font font;
	font.loadFromFile("Sansation.ttf");
	sf::Text text;
	text.setFont(font); 
	text.setString("Hello world");
	text.setCharacterSize(16);
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold | sf::Text::Underlined);
	text.setPosition(200,30);
	window.draw(text);




	for (int i = 0; i < shape.M; i++)
		for (int j = 0; j < shape.N; j++)
		{
			if (shape.field[i][j] == 0) continue;
			background.shape.setTextureRect(sf::IntRect(shape.field[i][j] * 18, 0, 18, 18));
			background.shape.setPosition((float)j * 18, (float)i * 18);
			background.shape.move(28, 31); //offset
			window.draw(background.shape);
		}
	for (int i = 0; i < 4; i++)
	{
		background.shape.setTextureRect(sf::IntRect(shape.colorNum * 18, 0, 18, 18));
		background.shape.setPosition((float)shape.a[i].x * 18, (float)shape.a[i].y * 18);
		background.shape.move(28, 31); //offset
		window.draw(background.shape);
	}
	window.draw(background.frame);
	window.display();
}
