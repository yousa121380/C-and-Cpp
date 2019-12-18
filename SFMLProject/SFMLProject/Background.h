#pragma once

#include<SFML/Graphics.hpp>

class Background
{
public:
	Background(const Background&) = delete;
	Background& operator=(const Background&) = delete;
	Background();
	sf::Sprite background, frame,shape;
private:
	sf::Texture t1, t2,t3;
};

