#include "Color.h"

Color::Color()
{
}

Color::~Color()
{
}

Color::Color(Coloor color)
{
	setColor(color);
}

void Color::setColor(Coloor color)
{
	this->color = color;
}
