#pragma once
#include "Viewer.h"
#include <string>
#include <SFML/Main.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class SFMLViewer :public Viewer
{
private:
	std::string windowName;
	sf::VideoMode resolution;
	sf::RenderWindow* window;
	std::string fontPath;
	sf::Font font;

public:
	SFMLViewer(int resx, int resy, std::string winname, std::string font);
	SFMLViewer();
	~SFMLViewer();

	void setWindowName(std::string str);
	std::string getWindowName();

	void setResolution(int x, int y);
	sf::VideoMode getResolution();

	void setFont(std::string pathToFont);
	std::string getFontPath();
	sf::Font getFont();

	void updateDisplay();

	void loop();
};

