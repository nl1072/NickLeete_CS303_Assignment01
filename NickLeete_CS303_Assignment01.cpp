// NickLeete_CS303_Assignment01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("A1input.txt");
	if (!inFile.is_open()) {
		cout << "Could not open \"A1input.txt\"" << endl;
		return 1;
	}

	inFile.close();
}