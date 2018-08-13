#include "stdafx.h"
#include "MasterMindGame.h"


MasterMindGame::MasterMindGame()
{
}


MasterMindGame::~MasterMindGame()
{
}

Answer MasterMindGame::getAnswer(Guess guess)
{
	Answer answer = Answer();
	int i = 0;
	for (auto color: guess)
	{
		if (color == this->code[i])
		{
			answer.push_back(Peg::Black);
			continue;
		}
		else {
			bool colorFound = false;
			for (auto codeColor: this->code)
			{
				if (color == codeColor)
				{
					answer.push_back(Peg::White);
					colorFound = true;
					break;
				}
			}
			if (!colorFound)
			{
				answer.push_back(Peg::None);
			}
		}
	}
	this->tries++;
	return answer;
}
