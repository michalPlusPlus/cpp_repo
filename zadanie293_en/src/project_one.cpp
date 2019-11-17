//============================================================================
// Name        : zadanie293_en.cpp
// Author      : Michal
// Version     : 1.0
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;


const int size=4;
string data[size];

void num_load() {	//function for loading numbers from file
	fstream file;
		file.open("examples.txt", ios::in);

		for (int i=0; i<size; i++) {
			file >> data[i];
		}
}

void check() {
	data[0] = "JABFDFBAJ";
	data[1] = "HAJAHAJAH";
	data[2] = "ABBA";
	data[3] = "JANA";
	data[2] = "JABBA";
}

bool palindrome(string str) {
	int r = str.length();
	int s = r/2;

	for (int i=0; i<s; i++) {
		if (str[i] != str[r-i-1])
			return false;
	}
	return true;
}


int main() {
	check();
	for (int i=0; i<size; i++) {
		if (palindrome(data[i]))
			cout << data[i] << endl;
	}

	return 0;
}
