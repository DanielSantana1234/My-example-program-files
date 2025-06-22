#include <iostream>
#include "header.h"
#include <vector>

using namespace std;
namespace nineHW
{
	void main() {
		vector <int> lees{ 1,2,3,4,5,6,7,8,9,10 };
		char choice{};
		do {
			cout << "Enter your choice from the list of items: ";
			cout << "P = Print the list of items" << endl;
			cout << "A = Add an item to the list" << endl;
			cout << "M = Display the mean of the list of items" << endl;
			cout << "S = Display the smallest number in the list of items" << endl;
			cout << "L = Display the largest number in the list of items" << endl;
			cout << "Q = Quit the program" << endl;

			cin >> choice;

			if (choice == 'P' || choice == 'p') {
				if (lees.size() != 0) {
					cout << "The list of items are: ";
					for (auto item : lees) {
						cout << item << " ";
					}
				}
				else {
					cout << "[] the list is empty" << endl;
				}
				cout << endl;
			}
			else if (choice == 'A' || choice == 'a') {
				cout << "Enter the number you want to add to the list: ";
				int num_to_add{};
				cin >> num_to_add;
				lees.push_back(num_to_add);
				cout << num_to_add << " added to the list" << endl;
			}
			else if (choice == 'M' || choice == 'm') {
				double sum{};
				if (lees.size() != 0) {
					for (auto item : lees) {
						sum += item;
					}
					cout << "The mean of the list of items is: " << static_cast<double>(sum) / lees.size() << endl;
				}
				else {
					cout << "[] the list is empty" << endl;
				}
			}
			else if (choice == 'S' || choice == 's') {
				if (lees.size() != 0) {
					int smallest{ lees.at(0) };
					for (auto item : lees) {
						if (item < smallest) {
							smallest = item;
						}
					}
					cout << "The smallest number in the list of items is: " << smallest << endl;
				}
				else {
					cout << "[] the list is empty" << endl;
				}
			}
			else if (choice == 'L' || choice == 'l') {
				if (lees.size() != 0) {
					int largest{ lees.at(0) };
					for (auto item : lees) {
						if (item > largest) {
							largest = item;
						}
					}
					cout << "The largest number in the list of items is: " << largest << endl;
				}
				else {
					cout << "[] the list is empty" << endl;
				}
			}
			else if (choice == 'Q' || choice == 'q') {
				cout << "Goodbye!" << endl;
				break;
			}
			else {
				cout << "Invalid choice, please try again!" << endl;
			}
		} while (choice != 'Q' && choice != 'q');
	}
}