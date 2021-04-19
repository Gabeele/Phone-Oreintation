#define TRAINING_LENGTH 175

#include "TrainData.h"
#include "NearestNeighbor.h"

using namespace std;

void checkUserInput() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}


int main() {

	Orientation* arr[TRAINING_LENGTH];

	trainArray(arr);

	double x, y, z;

	cout << "Enter in x: ";
	cin >> x;
	checkUserInput();
	cout << endl << endl;

	cout << "Enter in y: ";
	cin >> y;
	checkUserInput();
	cout << endl << endl;
		
	cout << "Enter in z: ";
	cin >> z;
	checkUserInput();
	cout << endl << endl;

	Orientation o(x, y, z);

	setNN(&o, arr);

	cout << "x: " << o.x << "\ty: " << o.y << "\tz: " << o.x << "\tOrientation: " << o.orientation << endl;




}