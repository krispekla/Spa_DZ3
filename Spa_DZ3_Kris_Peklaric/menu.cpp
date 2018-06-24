#include "menu.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Main.hpp>
#include <SFML/Window.hpp>

menu::menu(sf::RenderWindow *window, float width, float height)
{
	this->window = window;
	if (!font.loadFromFile("arrial.ttf"))
	{
		std::cout << "Font se nije ucitao" << std::endl;
	}

	menuText[0].setFont(font);
	menuText[0].setFillColor(sf::Color::Yellow);
	menuText[0].setString("Igraj");
	menuText[0].setCharacterSize(45);
	menuText[0].setPosition(sf::Vector2f(width / 2.08, height / (MAX_NUMBER_OF_ITEMS + 1) * 1.3));

	menuText[1].setFont(font);
	menuText[1].setFillColor(sf::Color::White);
	menuText[1].setString("Izlaz");
	menuText[1].setCharacterSize(45);
	menuText[1].setPosition(sf::Vector2f(width / 2.08, height / (MAX_NUMBER_OF_ITEMS + 1) * 1.7));

	selectedItemIndex = 0;


}


menu::~menu()
{
}

void menu::draw(sf::RenderWindow &window)
{


	//Ucitavanje 
	sf::Font font;
	if (!font.loadFromFile("arrial.ttf"))
	{
		std::cout << "Font se nije uspio ucitati" << std::endl;
	}


	sf::Texture pozadina;
	if (!pozadina.loadFromFile("pozadina.jpg"))
	{
		std::cout << "Pozadina se nije uspio ucitati" << std::endl;
	}



	sf::RectangleShape objektPozadina(sf::Vector2f(1280, 640));
	objektPozadina.setTexture(&pozadina);
	objektPozadina.setTextureRect(sf::IntRect(0, 0, 1280, 600));


	sf::Text naslov;
	naslov.setString("Singapur meeting");
	naslov.setFont(font);
	naslov.setFillColor(sf::Color::White);
	naslov.setCharacterSize(56);
	naslov.setPosition(450, 50);

	sf::Text footer;
	footer.setString("Simple A-star implementation, Kris Peklaric");
	footer.setFont(font);
	footer.setFillColor(sf::Color::White);
	footer.setCharacterSize(26);
	footer.setPosition(400, 550);


	
	//Crtanje objekta

	this->window->draw(objektPozadina);
	this->window->draw(naslov);
	this->window->draw(footer);



	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menuText[i]);
	}

}

void menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menuText[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menuText[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}

void menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menuText[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menuText[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}
