#include "stdafx.h"
#include "MasterMindAgent.h"


MasterMindAgent::MasterMindAgent()
{
	for (int i = 0; i <= 5; ++i)
	{
		for (int j = 0; j <= 5; j++)
		{
			for (int k = 0; k <= 5; k++)
			{
				for (int l = 0; l <= 5; l++)
				{
					Guess * guess = new Guess();
					guess->push_back(Color(i));
					guess->push_back(Color(j));
					guess->push_back(Color(k));
					guess->push_back(Color(l));
					this->possibleGuesses.push_back(guess);
				}
			}
		}
	}
}


MasterMindAgent::~MasterMindAgent()
{
}
