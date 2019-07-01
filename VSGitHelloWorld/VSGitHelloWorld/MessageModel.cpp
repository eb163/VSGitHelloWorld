#include "MessageModel.h"



MessageModel::MessageModel()
{
}

MessageModel::MessageModel(Viewer& v, std::string msg, int resx, int resy, int posx, int posy)
{
	connectViewer(v);
	setMessage(msg);
	setScreenResolution(resx, resy);
	setMsgPosition(posx, posy);
}


MessageModel::~MessageModel()
{
}

void MessageModel::setMessage(std::string msg)
{
	message = msg;
}

std::string MessageModel::getMessage()
{
	return message;
}

void MessageModel::setScreenResolutionX(int x)
{
	screenResolutionX = x;
}

void MessageModel::setScreenResolutionY(int y)
{
	screenResolutionY = y;
}

void MessageModel::setScreenResolution(int x, int y)
{
	setScreenResolutionX(x);
	setScreenResolutionY(y);
}

int MessageModel::getScreenResolutionX()
{
	return screenResolutionX;
}

int MessageModel::getScreenResolutionY()
{
	return screenResolutionY;
}

void MessageModel::getScreenResolution(int & x, int & y)
{
	x = getScreenResolutionX();
	y = getScreenResolutionY();
}

void MessageModel::setMsgPositionX(int x)
{
	msgPositionX = x;
}

void MessageModel::setMsgPositionY(int y)
{
	msgPositionY = y;
}

void MessageModel::setMsgPosition(int x, int y)
{
	setMsgPositionX(x);
	setMsgPositionY(y);
}

int MessageModel::getMsgPositionX()
{
	return msgPositionX;
}

int MessageModel::getMsgPositionY()
{
	return msgPositionY;
}

void MessageModel::getMsgPosition(int & x, int & y)
{
	x = getMsgPositionX();
	y = getMsgPositionY();
}
