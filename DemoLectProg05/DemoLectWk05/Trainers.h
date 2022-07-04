#pragma once

#include "SportsShoes.h"

class Trainers : public SportsShoes
{
private:
	std::string brand;

public:
	Trainers();
	Trainers(int c, std::string t, std::string b);
	Trainers(const Trainers& aTrg);

	// Getters
	std::string GetBrand();
};