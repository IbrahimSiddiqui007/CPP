#pragma once

#include <iostream>
#include <string>

class SportsShoes
{
private:
	int cost;
	std::string type;

public:
	SportsShoes();
	SportsShoes(int c);
	SportsShoes(std::string t);
	SportsShoes(int c, std::string t);
	SportsShoes(const SportsShoes& ss);

	// Getters
	int GetCost();
	std::string GetType();

	// Setters
	void SetCost(int c);
	void SetType(std::string t);
};