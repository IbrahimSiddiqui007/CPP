#pragma once
#include "TransportVehicle.h"
#include <iostream>
#include <vector>
#include <string>

class Truck : public TransportVehicle
{
private:
	double mileage;
public:
	Truck(int VIN, int age, double MC, double Kms);
	int getMileage();
	void setMileage(int Kms);
};