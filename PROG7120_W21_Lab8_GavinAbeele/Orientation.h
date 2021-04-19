#pragma once

#define NULL_ORIENTATION -1

class Orientation {
public:
	double x;
	double y;
	double z;
	int orientation = NULL_ORIENTATION;

	Orientation();

	Orientation(double x, double y, double z);

	Orientation(double x, double y, double z, int orientation);

	void setOrientation(int orientation);


};