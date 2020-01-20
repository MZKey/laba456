#include <iostream>
#include "Shape.h"
#include "Circle.h"

int main()
{
	Shape* shap;
	Circle* cir = new Circle();
	shap = cir;
	shap->Perimeter();
	return 0;
}