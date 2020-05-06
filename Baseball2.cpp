/*
Lydia Pierce
CSCI 182
Baseball1.cpp Takes input from a file "Baseball.txt" that holds players
stats. This program calculates the batting averages and prints the data
to the screen.
v1.0 2/19/2020
*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Player.h"
// #include "stdafx.h"

using namespace std;

int main()
{
	Player p;

	ifstream inFile;
	inFile.open("Baseball.txt");
	if (!inFile.good()) {
		cout << "Unable to open file";
		exit(1); // terminate with error
	}

	int importRows = 0;
	Player Players[MAXPLAYERS];

	while (!inFile.eof() || importRows + 1 <= MAXPLAYERS) {
		// Read in line
		// Write to Player's Structure here
		inFile >> p._PlayerName >> p._hits >> p._walks >> p._outs;

		if (p._hits + p._walks + p._outs != 0)
			p.BatAvg = (p._hits*1.0 / (p._hits + p._outs));
		else
			p.BatAvg = 0;
		
		// Fill the array
		Players[importRows] = p;

		importRows++;
	}
	// Close the input file
	inFile.close();

	string linebreak = "*****************************************\n";
	string teamname = "The Panthers";

	cout << linebreak << teamname << " Lineup\n" << linebreak;
	cout << "\tH W O Bat Avg" << endl;
	for (int row = 0; row < MAXPLAYERS; row++)
	{
		cout << Players[row]._PlayerName << "\t" << Players[row]._hits
			<< " " << Players[row]._walks << " " << Players[row]._outs
			<< " " << fixed << setprecision(2) << Players[row].BatAvg << endl;
	}
	cout << linebreak;
	return 0;
}

