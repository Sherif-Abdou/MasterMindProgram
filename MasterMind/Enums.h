#pragma once
#include <vector>
using std::vector;
enum Peg
{
	Black,
	White,
	None
};

enum Color
{
	Red,
	Blue,
	Green,
	Yellow,
	Orange,
	Purple
};

using Guess = vector<Color>;
using Answer = vector<Peg>;
