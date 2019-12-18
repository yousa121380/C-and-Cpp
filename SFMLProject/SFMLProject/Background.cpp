#include "Background.h"

Background::Background()
{
	t1.loadFromFile("background.png");
	t2.loadFromFile("frame.png");
	t3.loadFromFile("tiles.png");
	background.setTexture(t1);
	frame.setTexture(t2);
	shape.setTexture(t3);
	shape.setTextureRect(sf::IntRect(0, 0, 18, 18));
}
