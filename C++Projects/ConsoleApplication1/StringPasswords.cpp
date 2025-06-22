#include <iostream>
#include <string>

using namespace std;

namespace stringspass {
	int main() {
		/*string alphabet = {"[ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
		string key{" [XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

		cout << "Enter a string to encrypt: ";
		string input {};
		getline(cin, input);
		string encrypted {};
		cout << "The string you entered is: " << input << endl;
		for (char c : input) {
			size_t index = alphabet.find(c);
			if (index != string::npos) {
				encrypted += key[index];
			}
			else {
				encrypted += c;
			}
		}
		cout << "Encrypted string: " << encrypted << endl;
		string decrypted {};
		for (char c : encrypted) {
			size_t index = key.find(c);
			if (index != string::npos) {
				decrypted += alphabet[index];
			}
			else {
				decrypted += c;
			}
		}
		cout << "Decrypted string: " << decrypted << endl;*/

		// Assignment 1 letter pyramid:

		/*cout << "Enter a string of letters: " << endl;
		string input {};
		getline(cin, input);

		int length = input.length();

		for (int i = 0; i < length; i++) {
			for (int j = 0; j < (length-1)-i; j++) {
				cout << " ";
			}
			for (int k = 0; k <= i; k++) {
				cout << input[k];
			}
			for (int l = i - 1; l >= 0; l--) {
				cout << input[l];
			}
			cout << endl;
		}*/

		std::string letters{};

		std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
		getline(std::cin, letters);

		size_t num_letters = letters.length();

		int position{ 0 };

		// for each letter in the string
		for (char c : letters) {

			size_t num_spaces = num_letters - position;
			while (num_spaces > 0) {
				std::cout << " ";
				--num_spaces;
			}

			// Display in order up to the current character
			for (size_t j = 0; j < position; j++) {
				std::cout << letters.at(j);
			}

			// Display the current 'center' character
			std::cout << c;

			// Display the remaining characters in reverse order
			for (int j = position - 1; j >= 0; --j) {
				// You can use this line to get rid of the size_t vs int warning if you want
				auto k = static_cast<size_t>(j);
				std::cout << letters.at(k);
			}

			std::cout << std::endl; // Don't forget the end line
			++position;
		}

		return 0;
	}
}