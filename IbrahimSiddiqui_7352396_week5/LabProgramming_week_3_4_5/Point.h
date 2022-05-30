#pragma once
#include <iostream>

class Point 
{
private: 
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	void print();
	void PointPos(double x2, double y2);
	void distance(double x2, double y2);
};