#include "Triangle.h"

Point Triangle::getA() const
{
	return a;
}

Point Triangle::getB() const
{
	return b;
}

Point Triangle::getC() const
{
	return c;
}

void Triangle::setA(Point point)
{
	this->a = point;
}

void Triangle::setB(Point point)
{
	this->b = point;
}

void Triangle::setC(Point point)
{
	this->c = point;
}

float Triangle::Area()
{
	return abs((((a.x - c.x) * (b.y - c.y)) - ((b.x - c.x) * (a.y - c.y))) / 2);
}

float Triangle::Height(Point dot)
{
	float p = Perimeter() / 2;

	if (dot == a)
	{
		return (2 * sqrt(p * (p - length(a, b)) * (p - length(c, b)) * (p - length(a, c)))) / length(b, c);
	}
	else if (dot == b)
	{
		return (2 * sqrt(p * (p - length(a, b)) * (p - length(c, b)) * (p - length(a, c)))) / length(a, c);
	}
	else if (dot == c)
	{
		return (2 * sqrt(p * (p - length(a, b)) * (p - length(c, b)) * (p - length(a, c)))) / length(a, b);
	}
	else throw - 1;
}

float Triangle::Perimeter()
{
	return length(a, b) + length(b, c) + length(c, a);
}
