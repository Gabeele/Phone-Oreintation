#include "NearestNeighbor.h"


NearestNeighbor::NearestNeighbor() {

	Orientation o;

	this->NN = &o;


}

void NearestNeighbor::setNN(Orientation* o, Orientation* trainArray[]) {
	Orientation* nearest; 
	double nearestLength = 0;

	for (int i = 0; i < (sizeof(trainArray) / sizeof(o)); i++) {
		double x1 = o->x;
		double y1 = o->y;
		double z1 = o->z;
		
		double x2 = trainArray[i]->x;
		double y2 = trainArray[i]->y;
		double z2 = trainArray[i]->z;

		double length = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2)));

		if (length < nearestLength) {
			nearest = trainArray[i];
			nearestLength = length;
		}

	}

	if (nearest == NULL) {
		cout << "No nearest point." << endl;

		return;

	}

	o->orientation = nearest->orientation;
	
}
