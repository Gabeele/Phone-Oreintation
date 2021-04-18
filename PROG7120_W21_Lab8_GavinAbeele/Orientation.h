#pragma once

#define NULL_ORIENTATION -1

class Orientation {

	double x;
	double y;
	double z;
	int orientation = NULL_ORIENTATION;

public:

	Orientation();

	Orientation(double x, double y, double z);

	void setOrientation(int orientation);


};