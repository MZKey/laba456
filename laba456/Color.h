#pragma once
class Color
{
public:
	enum Coloor { Black, White, Red, Violet, Green, Blue, Yellow };
	Color();
	~Color();
	Color(Coloor color);
	void setColor(Coloor color);
private:
	Coloor color = Black;
};

