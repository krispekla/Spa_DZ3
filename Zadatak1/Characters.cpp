#include "Characters.h"
#include <iostream>

Characters::Characters(sf::RenderWindow * window)
{
	this->window = window;
}

void Characters::setStartPositionCharacters(pozicija a, pozicija b)
{
	current.x = a.x;
	current.y = a.y;
	last.x = a.x;
	last.y = a.y;
	finish.x = b.x;
	finish.y = b.y;

}


void Characters::Draw(sf::Sprite & spriteTrump, sf::Sprite & spriteKim, int *polje)
{

	window->draw(spriteTrump);
	window->draw(spriteKim);
	spriteTrump.setPosition(current.x, current.y);
}

void Characters::NextMove(string ruta)
{

	if (counter < ruta.length()-1)
	{

		char temp = ruta[counter];
		switch (temp)
		{
		case '0':
			current.x += 32;
			break;
		case '1':
			current.x += 32;
			current.y += 32;
			break;

		case '2':
			current.y += 32;
			break;

		case '3':
			current.x -= 32;
			current.y += 32;
			break;
		case '4':
			current.x -= 32;
			break;
		case '5':
			current.x -= 32;
			current.y -= 32;

			break;
		case '6':
			current.y -= 32;

			break;
		case '7':
			current.x += 32;
			current.y -= 32;

			break;
		default:
			break;
		}
		counter++;
	}



}

