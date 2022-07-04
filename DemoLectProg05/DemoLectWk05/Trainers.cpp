#include "Trainers.h"

Trainers::Trainers()
{
	// note: base class defualt constructor is called;
	brand = "unknown";
}


// parameter constructor of Trainers; passing arguement to base class constructor
Trainers::Trainers(int c, std::string t, std::string b) : SportsShoes(c, t)
{
	brand = b;
}


Trainers::Trainers(const Trainers& aTrg)
{
	this->brand = aTrg.brand;
}

// Getters
std::string Trainers::GetBrand()
{
	return brand;
}

// Setters
// Why no setters?