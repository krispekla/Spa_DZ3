#pragma once
#include <string>
#include <iostream>
#include <array>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics/VertexArray.hpp>
using namespace std;

class TileMap
{
public:
	TileMap(sf::RenderWindow *window);
	void Draw(int *poljee);



private:
	sf::RenderWindow *window;
	sf::Texture tekstura;
	sf::Sprite spriteTekstura;
	sf::Texture zid;
	sf::Sprite spriteZid;
	
	sf::Sprite put;
};