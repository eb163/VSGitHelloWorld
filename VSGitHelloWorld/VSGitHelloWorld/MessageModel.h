#pragma once
#include "Model.h"
#include <string>

class MessageModel :
	public Model
{

private:
	std::string message;
	int screenResolutionX = 0, screenResolutionY = 0;
	int msgPositionX = 0, msgPositionY = 0;
public:
	MessageModel();
	MessageModel(Viewer& v, std::string msg, int resx, int resy, int posx, int posy);
	~MessageModel();

	void setMessage(std::string msg);
	std::string getMessage();

	void setScreenResolutionX(int x);
	void setScreenResolutionY(int y);
	void setScreenResolution(int x, int y);

	int getScreenResolutionX();
	int getScreenResolutionY();
	void getScreenResolution(int& x, int& y);

	void setMsgPositionX(int x);
	void setMsgPositionY(int y);
	void setMsgPosition(int x, int y);

	int getMsgPositionX();
	int getMsgPositionY();
	void getMsgPosition(int& x, int& y);
};

