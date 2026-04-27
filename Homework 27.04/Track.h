#pragma once
#include "PassengerCar.h"
class Truck :
    public PassengerCar
{
	int cargoCapacity;

public:
	Truck(string brand, string color, int fuelTankCapacity, float fuelConsumption, int cargoCapacity);

	void setCargoCapacity(int cargoCapacity);
	int getCargoCapacity();

	float calculateCost();
	void showInfo();
};