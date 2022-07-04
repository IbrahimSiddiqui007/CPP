#pragma once
#include "PersonOff.h"
#include "PersonOn.h"
#include "Person.h"

class Bus
{
public:
	void addToBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops,PersonOn& p, char stop);
	void removeFromBus(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops,PersonOff& pff , char stop);
	void reset(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops);
	void print(std::vector<std::vector<char>>& passenger);
	void stopAll(std::vector<std::vector<char>>& passenger, std::vector<std::vector<char>>& Stops, std::fstream& stopsOn, std::fstream& stopsOff, char stop);
};