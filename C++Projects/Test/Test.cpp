// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello, welcome to Daniel's Carpet Cleaning Service." << endl;
	cout << "\nHow many small rooms would you like cleaned? ";
	int number_of_small_rooms{ 0 };
	cin >> number_of_small_rooms;

	cout << "\nHow many large rooms would you like cleaned? ";
	int number_of_large_rooms{ 0 };
	cin >> number_of_large_rooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;

	const double price_per_small_room{ 25.0 };
	const double price_per_large_room{ 35.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 };

	double cost{ (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) };
	double tax{ cost * sales_tax };
	double total_estimate{ cost + tax };

	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << tax << endl;
	cout << "====================================" << endl;
	cout << "Total estimate: $" << total_estimate << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

	return 0;

}

