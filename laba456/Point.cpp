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

float Point::getX() const
{
	return this->x;
}

float Point::getY() const
{
	return this->y;
}

void Point::setCoordinate(float x, float y)
{
	this->x = x;
	this->y = y;
}

bool Point::operator == (Point dot)
{
	return (x == dot.x && y == dot.y) ? true : false;
}
bool Point::operator != (Point dot)
{
	return (x != dot.x || y != dot.y) ? true : false;
}

//�������������� ���������� �/� �������
float �athetHorizontal(Point dot1, Point dot2)
{
	return abs(dot2.x - dot1.x);
}
//������������ ��������� �/� �������
float �athetVertical(Point dot1, Point dot2)
{
	return abs(dot2.y - dot1.y);
}
//��������� �/� �������
float length(Point dot1, Point dot2)
{
	return sqrt(pow(�athetHorizontal(dot1, dot2), 2) + pow(�athetVertical(dot1, dot2), 2));
}
