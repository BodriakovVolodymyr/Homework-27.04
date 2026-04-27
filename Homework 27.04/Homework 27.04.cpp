#include "Track.h"
#include "PassengerCar.h"
#include <iostream>

int main()
{
	PassengerCar a("Toyota", "Red", 50, 8.5);
	a.showInfo();
	cout << "Distance: " << a.calculateFuelUsed() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	Truck b("Mercedes", "Black", 300, 25, 10);
	b.showInfo();
	cout << "Cost for transport 1 ton: " << b.calculateCost() << endl;
}
