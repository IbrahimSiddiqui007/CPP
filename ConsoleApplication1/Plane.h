#pragma once
#include "TransportVehicle.h"
#include <iostream>
#include <vector>
#include <string>

class Plane : public TransportVehicle
{
private:
	double hoursFlown;
public:
	Plane(int VIN, int age, double MC, double HF);
	int getHoursFlown();
	void setHoursFlown(int HF);
};