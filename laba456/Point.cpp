#include "Point.h"

Point::Point()
{
}

Point::Point(float x, float y)
{
	setCoordinate(x, y);
}

void Point::setX(float x)
{
	this->x = x;
}

void Point::setY(float y)
{
	this->y = y;
}

void Point::setCoordinate(float x, float y)
{
	this->x = x;
	this->y = y;
}
