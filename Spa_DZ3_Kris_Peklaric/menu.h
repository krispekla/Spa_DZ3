#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


#define MAX_NUMBER_OF_ITEMS 2

class menu
{
public:
	menu(sf::RenderWindow *window, float width, float height);
	~menu();

	void draw(sf::RenderWindow &window);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }


private:
	sf::RenderWindow *window;
	int selectedItemIndex;
	sf::Font font;
	sf::Text menuText[MAX_NUMBER_OF_ITEMS];
	float rotacija = 0;
};


