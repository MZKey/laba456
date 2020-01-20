#pragma once
#include "Shape.h"
#include "Point.h"
class Circle : public Shape
{
private:
	float R;
	Point O;
public:
	Circle();
	~Circle();
	Circle(float R, Point O);


	float getR() const;
	Point getO() const;
	void setR(float R);
	void setO(Point O);

	float Area() override;
	float Perimeter() override;
	float Diameter() const;
	bool Belong(Point dot) const;
};

