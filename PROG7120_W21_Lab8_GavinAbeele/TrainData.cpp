#include "TrainData.h"


void trainArray(Orientation* trainArray[]) {

	string fileName = "trainingData.txt";

	ifstream file;

	file.open(fileName);

	if (file.is_open()) {
		int counter = 0;

		while (!file.eof()) {

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

			Orientation* o = new Orientation(x, y, z, orientation);

			trainArray[counter] = o;

			counter++;

		}


	}

}

