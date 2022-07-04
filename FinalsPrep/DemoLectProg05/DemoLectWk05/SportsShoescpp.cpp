#include "SportsShoes.h"

// Default constructor
SportsShoes::SportsShoes()
{
	cost = 0;
	type = "Generic";
}

// Parameter constructors
SportsShoes::SportsShoes(int c)
{
	cost = c;
	type = "Generic";
}

// Parameter constructors
SportsShoes::SportsShoes(std::string t)
{
	cost = 0;
	type = t;
}


// Parameter constructors
SportsShoes::SportsShoes(int c, std::string t)
{
	cost = c;
	type = t;
}

// Copy constructors
SportsShoes::SportsShoes(const SportsShoes& ss)
{
	this->cost = ss.cost;
	this->type = ss.type;
}

// Getters
int SportsShoes::GetCost()
{
	return cost;
}

std::string SportsShoes::GetType()
{
	return type;
}

// Setters
void SportsShoes::SetCost(int c)
{
	cost = c;
}

void SportsShoes::SetType(std::string t)
{
	type = t;
}