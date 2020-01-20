#include "Shape.h"
#include "Point.h"


class Triangle : public Shape
{
private:
	Point a, b, c;

public:

	Point getA() const;
	Point getB() const;
	Point getC() const;

	void setA(Point point);
	void setB(Point point);
	void setC(Point point);
	float Area() override;
	float Height(Point dot);
	float Perimeter() override;
};

