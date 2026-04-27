#include "PassengerCar.h"

PassengerCar::PassengerCar(string brand, string color, int fuelTankCapacity, float fuelConsumption)
{
	this->brand = brand;
	this->color = color;
	this->fuelTankCapacity = fuelTankCapacity;
	this->fuelConsumption = fuelConsumption;
}

void PassengerCar::setBrand(string brand)
{
	this->brand = brand;
}

void PassengerCar::setColor(string color)
{
	this->color = color;
}

void PassengerCar::setFuelTankCapacity(int fuelTankCapacity)
{
	this->fuelTankCapacity = fuelTankCapacity;
}

void PassengerCar::setFuelConsumption(float fuelConsumption)
{
	this->fuelConsumption = fuelConsumption;
}

string PassengerCar::getBrand()
{
	return brand;
}

string PassengerCar::getColor()
{
	return color;
}

int PassengerCar::getFuelTankCapacity()
{
	return fuelTankCapacity;
}

float PassengerCar::getFuelConsumption()
{
	return fuelConsumption;
}

float PassengerCar::calculateFuelUsed()
{
	return (fuelTankCapacity / fuelConsumption) * 100;;
}

void PassengerCar::showInfo()
{
	cout << "Brand: " << brand << endl;
	cout << "Color: " << color << endl;
	cout << "Fuel Tank Capacity: " << fuelTankCapacity << endl;
	cout << "Fuel Consumption: " << fuelConsumption << endl;
}
