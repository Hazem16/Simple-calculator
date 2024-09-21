#include <iostream>

int main()
{
	char continueCalc{ 'y' };

	while (continueCalc == 'y') {
		size_t char1{};
		size_t char2{};
		char op{};

		std::cout << "Enter an expression: ";
		std::cin >> char1 >> op >> char2;
		std::cin.clear();
		std::cin.ignore();

		if (op == '+') {
			std::cout << char1 + char2 << std::endl;
		}
		else if (op == '-') {
			std::cout << char1 - char2 << std::endl;
		}
		else if (op == '*') {
			std::cout << char1 * char2 << std::endl;
		}
		else if (op == '/') {
			if (char2 != 0) {
				std::cout << char1 / char2 << std::endl;
			}
			else if (char2 == 0) {
				std::cout << "Cannot divide by zero." << std::endl;
			}
		}
		else {
			std::cout << "Invalid operator." << std::endl;
			continue;
		}
		std::cout << "Do you want to perform another calculation? (y/n): ";
		std::cin >> continueCalc;
	}
}