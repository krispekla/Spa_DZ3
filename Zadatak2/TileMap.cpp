#include "TileMap.h"

TileMap::TileMap(sf::RenderWindow * window)
{
	this->window = window;
}

void TileMap::Draw(int *poljee)
{

	if (!tekstura.loadFromFile("tileset.png"))
	{
		cout << "nije se ucitala tekstura" << endl;
	}

	if (!zid.loadFromFile("blue.png"))
	{
		cout << "nije se ucitala tekstura" << endl;
	}

	spriteTekstura.setTexture(tekstura);
	spriteTekstura.setOrigin(0, 0);
	spriteTekstura.setPosition(0, 0);

	spriteZid.setTexture(zid);
	spriteZid.setPosition(0, 0);

	put.setColor(sf::Color::Blue);
	


	float desno = 0;
	float dolje = 0;


	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (*((poljee + j * 20) + i) == 1)
			{
				window->draw(spriteZid);
			}

			else if (*((poljee + j * 20) + i) == 34)
			{
				window->draw(put);

			}
			else
			{
				window->draw(spriteTekstura);

			}
			desno += 32;

			spriteTekstura.setPosition(desno, dolje);
			spriteZid.setPosition(desno, dolje);
			put.setPosition(desno, dolje);

		}
		desno = 0;
		dolje += 32;

		spriteTekstura.setPosition(desno, dolje);
		spriteZid.setPosition(desno, dolje);
		put.setPosition(desno, dolje);

	}


}

