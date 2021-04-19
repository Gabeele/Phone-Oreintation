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

void test(Orientation* trainArray[]) {

	string fileName = "testingData.txt";

	ifstream file;

	file.open(fileName);

	if (file.is_open()) {
		int counter = 0;

		while (!file.eof()) {
			
			string flag = "False";
			string line;
			getline(file, line);
			istringstream issLine(line);

			string temp;

			getline(issLine, temp, ',');
			double x = stof(temp);

			getline(issLine, temp, ',');
			double y = stof(temp);

			getline(issLine, temp, ',');
			double z = stof(temp);

			getline(issLine, temp, ',');
			int orientation = stof(temp);

			Orientation o(x, y, z);

			setNN(&o, trainArray);

			if (o.orientation == orientation) {
				flag = "True";
			}

			cout << "x: " << o.x << "\ty: " << o.y << "\tz: " << o.x << "\tOrientation: " << o.orientation << "\tTest Case: " << flag << endl;

			counter++;

		}


	}

}

int main() {

	Orientation* arr[TRAINING_LENGTH];

	trainArray(arr);

	cout << "Test Cases\n\n";

	test(arr);

	cout << "\n\n\n";
	
	system("pause");
	system("cls");

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