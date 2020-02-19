#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "stdafx.h"

using namespace std;

#define COLUMNS 5
#define ROWS 16

class Player
{
	string _PlayerName = "";
	int _hits = 0;
	int _walks = 0;
	int _outs = 0;
	
	Player(string PlayerName, int hits, int walks, int outs)
	{
		int PlayerStats[COLUMNS][ROWS];
		char PlayerNames[COLUMNS];

		_PlayerName = PlayerName;
		_hits = hits;
		_walks = walks;
		_outs = outs;
	}
	virtual ~Player() {};
	
	void ZeroArray();
	void FillArray();
	void PrintArray();
};
