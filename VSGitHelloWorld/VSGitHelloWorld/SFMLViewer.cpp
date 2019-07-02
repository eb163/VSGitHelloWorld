#include "SFMLViewer.h"



SFMLViewer::SFMLViewer(int resx, int resy, std::string winname, std::string font)
{
	setWindowName(winname);
	setResolution(resx, resy);
	setFont(font);
}

SFMLViewer::SFMLViewer()
{

}


SFMLViewer::~SFMLViewer()
{
	if (window != nullptr)
	{
		window->close();
		delete window;
		window = nullptr;
	}
}

void SFMLViewer::setWindowName(std::string str)
{
	windowName = str;
}

std::string SFMLViewer::getWindowName()
{
	return windowName;
}

void SFMLViewer::setResolution(int x, int y)
{
	resolution.height = y;
	resolution.width = x;

	window = new sf::RenderWindow(resolution, windowName);
}

sf::VideoMode SFMLViewer::getResolution()
{
	return resolution;
}

void SFMLViewer::setFont(std::string pathToFont)
{
	fontPath = pathToFont;
	font.loadFromFile(fontPath);
}

std::string SFMLViewer::getFontPath()
{
	return fontPath;
}

sf::Font SFMLViewer::getFont()
{
	return font;
}

void SFMLViewer::updateDisplay()
{
	window->clear();

	//draw stuff

	window->display();
}

void SFMLViewer::loop()
{
	while (window->isOpen())
	{
		sf::Event sfE;
		window->pollEvent(sfE);
		if(sfE.type == sf::Event::Closed)
		{
			window->close();
		}

		//process event and package as an input to be sent to controller
		if (sfE.type == sf::Event::KeyReleased)
		{
			//create an input to pass to MVC system
			if (sfE.key.code == sf::Keyboard::Escape)
			{
				cout << "INPUT: Escape key pressed!" << endl;
				CloseInput ci;
				inputQueue.push(&ci);
			}
		}

		if (sfE.type == sf::Event::MouseButtonReleased)
		{
			if (sfE.mouseButton.button == sf::Mouse::Left)
			{
				cout << "INPUT: Left mouse button clicked!" << endl;
				LeftMouseClickInput lmc;
				inputQueue.push(&lmc);
			}
		}


		updateDisplay();
	}
}
