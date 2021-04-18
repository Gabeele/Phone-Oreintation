#include "NearestNeighbor.h"


NearestNeighbor::NearestNeighbor() {

	Orientation o;

	this->NN = &o;


}

void NearestNeighbor::setNN(Orientation* orientation) {

	this->NN = orientation;

}
