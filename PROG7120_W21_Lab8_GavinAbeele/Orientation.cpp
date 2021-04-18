#include "Orientation.h"

Orientation::Orientation() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Orientation::Orientation(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;

}

void Orientation::setOrientation(int orientation) {

	this->orientation = orientation;

}