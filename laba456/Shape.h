#pragma once
#include "Color.h"
class Shape
{
public:
	Color *color;
	Shape();
	~Shape();
	virtual float Area() = 0;
	virtual float Perimeter() = 0;
};

