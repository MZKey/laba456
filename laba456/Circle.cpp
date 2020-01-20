#include "Circle.h"



Circle::Circle()
{
}


Circle::~Circle()
{
}

Circle::Circle(float R, Point O)
{
	this->R = R;
	this->O = O;
}

float Circle::getR() const
{
	return this->R;
}

Point Circle::getO() const
{
	return this->O;
}

void Circle::setR(float R)
{
	this->R = R;
}

void Circle::setO(Point O)
{
	this->O = O;
}

float Circle::Area()
{
	return 3.141592653589793238462643 * pow(R, 2);
}

float Circle::Perimeter()
{
	return 2 * 3.141592653589793238462643 * R;
}

float Circle::Diameter() const
{
	return 2 * R;
}

bool Circle::Belong(Point dot) const
{
	return (length(O, dot) <= R) ? true : false;
}
