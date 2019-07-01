#include <iostream>
#include <string>
#include <thread>
#include <SFML/Main.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Model.h"
#include "Viewer.h"
#include "Controller.h"
#include "SFMLViewer.h"
#include "MessageModel.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;

void pause()
{
	char ch;
	string str = "Press any key to continue...";
	cout << str;
	cin >> ch;
}

int main()
{
	string msg = "Hello world!";
	cout << msg << endl;
	
	//create a window
//	sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "VSGitHelloWorld");

	//load a font
	string fontPath = "cour.ttf";
//	sf::Font courierFont; 
	/*	
	if (courierFont.loadFromFile(fontPath) == false)
	{
		cout << "Error loading the font in file: " << fontPath << endl;
	}
	*/
/*
	//create a text object and set values
	int textSize = 24;
	sf::Text msgText;
	msgText.setString(msg);
	msgText.setCharacterSize(textSize);
	msgText.setFont(courierFont);
	msgText.setOutlineColor(sf::Color::White);
	msgText.setFillColor(sf::Color::White);
*/
/*
	while (mainWindow.isOpen())
	{
		sf::Event sfE;
		while (mainWindow.pollEvent(sfE))
		{
			if(sfE.type == sf::Event::EventType::Closed)
			{
				mainWindow.close();
			}
		}

		//clear window
		mainWindow.clear();

		//draw stuff to window
		mainWindow.draw(msgText);

		//update window
		mainWindow.display();
	}
	*/

	int scrResX = 800, scrResY = 600;
	SFMLViewer sfview(scrResX, scrResY, "VSGitHelloWorld", fontPath);
	MessageModel(sfview, msg, scrResX, scrResY, 0, 0);
	//create a controller

	/*
	std::thread viewerThread([&sfview] {
		sfview.loop(); });

	viewerThread.join();
	*/
	pause();

	return 0;
}