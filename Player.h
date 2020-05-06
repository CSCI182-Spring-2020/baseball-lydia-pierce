#pragma once
#include <iostream>
#include <string>

using namespace std;

#define MAXPLAYERS 15 

class Player
{
public:
	string _PlayerName = "";
	int _hits = 0;
	int _walks = 0;
	int _outs = 0;
	float BatAvg = 0.0;
};
