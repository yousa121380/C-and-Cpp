#ifndef GAME_H
#define GAME_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <iostream>

#include"Background.h"
#include"Shape.h"
#include"Point.h"

class Game {
public:
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	Game();
	void run();
private:
	void processEvents();
	void update();
	void render();


	sf::Font font;
	sf::Text text;
	sf::RenderWindow window;
	sf::Clock clock;
	Background background;
	Shape shape;

	float timer , delay;
};



#endif // !GAME_H
