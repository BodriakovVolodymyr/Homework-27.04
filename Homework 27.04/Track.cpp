#include "Track.h"

Truck::Truck(string brand, string color, int fuelTankCapacity, float fuelConsumption, int cargoCapacity)
	:PassengerCar(brand, color, fuelTankCapacity, fuelConsumption)
{
	this->cargoCapacity = cargoCapacity;
}

void Truck::setCargoCapacity(int cargoCapacity)
{
	this->cargoCapacity = cargoCapacity;
}

int Truck::getCargoCapacity()
{
    return cargoCapacity;
}

float Truck::calculateCost()
{
	return (((getFuelConsumption() / 100) * 72.90) / getCargoCapacity());
}

void Truck::showInfo()
{
	PassengerCar::showInfo();
	cout << "Cargo capacity: " << cargoCapacity << endl;
}
