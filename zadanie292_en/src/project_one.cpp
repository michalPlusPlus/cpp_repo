//============================================================================
// Name        : project_one.cpp
// Author      : Michal
// Version     : 1.0
//============================================================================

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int data[500];

void num_load() {	//function for loading numbers from file
	fstream file;
		file.open("numbers.txt", ios::in);

		for (int i=0; i<500; i++) {
			file >> data[i];
		}
}


int main() {
	num_load();
	int s;
	bool prime=true;

	for (int i=2; i<1000; i++) {
		s = static_cast<int> (sqrt(i));		//transforming "double" type into int
		prime = true;
		for (int j=2; j<=s; j++) {
			if (i%j==0) {
				prime=false;
				break;
			}
		}
		if (prime) {
			for (int k=0; k<500; k++) {
				if (i*i==data[k])
					cout << data[k] << endl;
			}
		}
	}

	return 0;
}
