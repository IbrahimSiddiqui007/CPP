#include "Point.h"

Point::Point() 
	:x(1.0),y(1.0)
{

}

Point::Point(double x, double y) 
	:x(x), y(y) 
{

}

void Point::print()
{
	std::cout << "The coordinates of the point are " << "(" << x << "," << y << ")" << std::endl;
}


void Point::PointPos(double x2, double y2)
{
	double x1 = x;
	double y1 = y;

	if (x1 < x2 && y1 < y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Bottom right of Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1 < x2 && y1 > y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Top Right of Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1 > x2 && y1 < y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Bottom left of Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1 > x2 && y1 > y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Top left of Point " << "(" << x2 << "," << y2 << ")" << std::endl;
	}
	else if (x1==x2 && y1 > y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is Above Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1==x2 && y1 < y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is Below Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1 > x2 && y1==y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Right of Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}
	else if (x1 < x2 && y1 == y2)
	{
		std::cout << "Point" << "(" << x1 << "," << y1 << ")" << "is to the Left of Point " << "(" << x2 << "," << y2 << ")" << std::endl;

	}

}

void Point::distance(double x2, double y2)
{
	double distance = 0.0;
	double x1 = x;
	double y1 = y;

	distance = sqrt((x2-x1) * 2 + (y2-y1) * 2);
	std::cout << "The distance between point 1 and point 2 is " << distance << std::endl;
}
