#pragma once
#include <iostream>
#include <vector>
#include <string>

class FreightContainer 
{
private:
	double weight;
public:
	FreightContainer(int w);
	int getWeight();
	void setWeight(int w);
};
