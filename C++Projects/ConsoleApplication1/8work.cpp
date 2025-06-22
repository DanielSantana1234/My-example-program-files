#include <iostream>

using namespace std;

namespace eightHW {
	void main() {
		cout << "Enter an amount in cents: ";
		int cents{ 0 };
		cin >> cents;

		int dollars{ 0 };
		int quarters{ 0 };
		int dimes{ 0 };
		int nickels{ 0 };
		int pennies{ 0 };


		dollars = cents / 100;
		cents %= 100;

		quarters = cents / 25;
		cents %= 25;

		dimes = cents / 10;
		cents %= 10;

		nickels = cents / 5;
		cents %= 5;

		pennies = cents;
		/*while (cents > 0) {
			if (cents >= 100) {
				cents -= 100;
				dollars++;
			}
			else if (cents >= 25) {
				cents -= 25;
				quarters++;
			}
			else if (cents >= 10) {
				cents -= 10;
				dimes++;
			}
			else if (cents >= 5) {
				cents -= 5;
				nickels++;
			}
			else if (cents >= 1) {
				cents -= 1;
				pennies++;
			}
		}*/

		cout << "You can provide this change as follows: " << endl;
		cout << "dollars: " << dollars << endl;
		cout << "quarters: " << quarters << endl;
		cout << "dimes: " << dimes << endl;
		cout << "nickels: " << nickels << endl;
		cout << "pennies: " << pennies << endl;

	}
}