#include <cmath>

using namespace std;

class Point
{
public:
	float x, y;
	Point();
	Point(float x, float y);

	void setX(float x);
	void setY(float y);
	float getX() const;
	float getY() const;
	void setCoordinate(float x, float y);
	bool operator==(Point dot);
	bool operator!=(Point dot);
};


float ñathetHorizontal(Point dot1, Point dot2);

float ñathetVertical(Point dot1, Point dot2);

float length(Point dot1, Point dot2);

