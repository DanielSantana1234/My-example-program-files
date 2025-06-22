#include <iostream>
#include "header.h"
#include <vector>

using namespace std;

namespace B {
	void main() {
		/*int lower{ 10 };
		int upper{ 20 };

		cout << "Enter a number not between: " << lower << " and " << upper << ": ";
		bool within_bounds{ false };
		int num{ 0 };
		cin >> num;

		cout << boolalpha;
		cout << "The number you entered is: " << num << endl;
		within_bounds = (num > lower && num < upper);

		cout << "This number is not within bounds: " << !within_bounds << endl;*/

		vector <int> vec{ -99, 1,2,3,4,5,6,7,8,9,10};
		unsigned int count{ 0 };

		while (count < vec.size() && vec[count] != -99) {
			count++;
		}

		cout << count;

	}
}