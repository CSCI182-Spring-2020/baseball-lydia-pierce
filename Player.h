#pragma once
#include <iostream>
#include <string>

using namespace std;

#define MAXPLAYERS 15 

class Player
{
public:
	string _PlayerName = "";
	int _hits = 1;
	int _walks = 1;
	int _outs = 1;
	float BatAvg = 0.0;
};
