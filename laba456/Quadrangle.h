#pragma once
#include "Shape.h"
#include "Point.h"
class Quadrangle : public Shape
{
private:
	Point a, b, c, d;

public:
	Quadrangle();
	Quadrangle(Point a, Point b, Point c, Point d);

	Point getA();
	Point getB();
	Point getC();
	Point getD();

	void setA(Point point);
	void setB(Point point);
	void setC(Point point);
	void setD(Point point);
	float Area() override;
	float Perimeter() override;
};

