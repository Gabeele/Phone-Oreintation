#pragma once

#include <math.h>
#include <iostream>

#include "Orientation.h"

using namespace std;

class NearestNeighbor:public Orientation{
	Orientation* NN;

public:

	NearestNeighbor();

	void setNN(Orientation* orientation, Orientation* trainArray[]);


};
