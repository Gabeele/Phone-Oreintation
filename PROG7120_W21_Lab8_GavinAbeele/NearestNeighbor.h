#pragma once

#include "Orientation.h"

class NearestNeighbor:public Orientation{
	Orientation* NN;

public:

	NearestNeighbor();

	void setNN(Orientation* orientation);

	

};
