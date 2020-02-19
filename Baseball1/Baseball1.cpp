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
#include "stdafx.h"
#include "Player.h"
#include "Baseball.h"

using namespace std;


int main()
{
	void Player::ZeroArray()
	{
		// Zero out the array
		for (int xcounter = 0; xcounter < COLUMNS; xcounter++)
			for (int ycounter = 0; ycounter < ROWS; ycounter++)
			{
				PlayerStats[xcounter][ycounter] = 0;
				PlayerNames[ycounter] = "";
			}
	}

	void Player::FillArray()
	{
		ifstream inFile;
		inFile.open("Baseball.txt");
		if (!inFile) {
			cout << "Unable to open file";
			exit(1); // terminate with error
		}

		int importRows = 0;

		while (!inFile.eof() && importRows < ROWS) {
			// Read in line
			inFile >> PlayerName >> hits >> walks >> outs;

			// Write to Player's Structure here
			PlayerNames[importRows + 1] = PlayerName;
			PlayerStats[importRows][1] = hits;
			PlayerStats[importRows][2] = walks;
			PlayerStats[importRows][3] = outs;

			importRows++;
		}
		// Close the input file
		inFile.close();
	}


	string linebreak = "*****************************************\n";
	string teamname = "The Panthers";

	cout << linebreak << teamname << " Lineup\n" << linebreak;
	void Player::PrintArray()
	{
		for (int column = 0; column < COLUMNS; column++)
		{
			for (int row = 0; row < ROWS; row++)
			{
				cout << PlayerName[row] << PlayerStats[row][column];
			}
		}
	}
	cout << linebreak;
	return 0;
}

