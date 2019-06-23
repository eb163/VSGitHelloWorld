#include <iostream>
#include <string>
#include <SFML/Main.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


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
	sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "VSGitHelloWorld");

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
	}
	
	//pause();

	return 0;
}