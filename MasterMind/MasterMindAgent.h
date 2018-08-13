#pragma once
#include "Enums.h"
#include "MasterMindGame.h"

class MasterMindAgent
{
public:
	MasterMindAgent();
	~MasterMindAgent();
	MasterMindGame * game;
	vector<Guess> previousGuesses;
	vector<Answer> previousAnswers;
	vector<Guess*> possibleGuesses;
};

