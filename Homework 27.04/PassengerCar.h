#pragma once
#include <string>
#include<iostream>
#include<fstream>
using namespace std;

class PassengerCar
{
	string brand;
	string color;
	int fuelTankCapacity;
	float fuelConsumption;

public:
	PassengerCar(string brand, string color, int fuelTankCapacity, float fuelConsumption);

	void setBrand(string brand);
	void setColor(string color);
	void setFuelTankCapacity(int fuelTankCapacity);
	void setFuelConsumption(float fuelConsumption);

	string getBrand();
	string getColor();
	int getFuelTankCapacity();
	float getFuelConsumption();

	float calculateFuelUsed();
	void showInfo();
	
};

