#pragma once
#include "FreightContainer.h"
#include <iostream>
#include <vector>
#include <string>

class TransportVehicle
{
protected:
	int VehicleReg;
	int ageOfVehicle;
	double MaxCap;
	std::vector<FreightContainer*> vec;
public:
	TransportVehicle();
	TransportVehicle(int VIN, int Age, double MC);
	void setVehicleReg(int Vin);
	void setAge(int Age);
	void setMaxCap(double MC);
	int getVIN();
	int getAge();
	double getMaxCap();
};