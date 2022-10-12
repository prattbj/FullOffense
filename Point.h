/*
* The Point class holds the x and y values of an object. It allows the program to
* add and modify the X and Y values of an obect easily.
*/

#pragma once

class Point
{
public:
	Point(double x, double y);
	double getX();
	double getY();
	Point& operator += (Point point);
private:
	double x;
	double y;
};

