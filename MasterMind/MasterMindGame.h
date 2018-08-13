#pragma once

#include "Enums.h"

class MasterMindGame
{
public:
	MasterMindGame();
	~MasterMindGame();
	Guess code;
	int tries = 0;
	Answer getAnswer(Guess guess);
};

