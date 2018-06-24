#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>

using namespace std;

class Characters
{
public:
	struct pozicija
	{
		int x;
		int y;
	};

	Characters(sf::RenderWindow *window);
	void setStartPositionCharacters(pozicija a, pozicija b);
	void Draw(sf::Sprite &spriteTrump, sf::Sprite &spriteKim, int *polje);
	void NextMove(string ruta);
private:
	pozicija last;
	pozicija current;
	pozicija finish;
	int counter = 0;
	sf::RenderWindow *window;
};

