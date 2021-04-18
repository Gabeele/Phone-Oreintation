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

Orientation::Orientation(double x, double y, double z, int orientation) {
	this->x = x;
	this->y = y;
	this->z = z;
	this->orientation = orientation;

}

void Orientation::setOrientation(int orientation) {

	this->orientation = orientation;

}