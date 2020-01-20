#include "Quadrangle.h"

Quadrangle::Quadrangle()
{
	a = Point(0, 0);
	b = Point(0, 1);
	c = Point(1, 0);
	d = Point(1, 1);
}

Quadrangle::Quadrangle(Point a, Point b, Point c, Point d)
{
	setA(a);
	setB(b);
	setC(c);
	setD(d);
}

Point Quadrangle::getA()
{
	return a;
}

Point Quadrangle::getB()
{
	return b;
}

Point Quadrangle::getC()
{
	return c;
}

Point Quadrangle::getD()
{
	return d;
}

void Quadrangle::setA(Point point)
{
	this->a = point;
}

void Quadrangle::setB(Point point)
{
	this->b = point;
}

void Quadrangle::setC(Point point)
{
	this->c = point;
}

void Quadrangle::setD(Point point)
{
	this->d = d;
}

float Quadrangle::Area()
{
	return abs(a.x * b.y + b.x * c.y + c.x * d.y + d.x * a.y
		- b.x * a.y - c.x * b.y - d.x * c.y - a.x * d.y) / 2.0;
}

float Quadrangle::Perimeter()
{
	return length(a, b) + length(a, d) + length(b, c) + length(c, d);
}
