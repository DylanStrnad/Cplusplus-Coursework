// demonstrates separating digits with a remainder operator
// Dylan Strnad
// 01/23/2024

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {



	cout << "Input number from 01 to 35: ";
	int number;
	cin >> number;

	const int singles = number % 10;
	const int tens = number / 10;

	cout << "tens: " << tens << endl;
	cout << "singles: " << singles << endl;

	if (tens == 0) {

		switch (singles) {
		case 1:
			cout << "one";
			break;

		case 2:
			cout << "two";
			break;


		case 3:
			cout << "three";
			break;

		case 4:
			cout << "four";
			break;

		case 5:
			cout << "five";
			break;

		case 6:
			cout << "six";
			break;

		case 7:
			cout << "seven";
			break;

		case 8:
			cout << "eight";
			break;

		case 9:
			cout << "nine";
			break;

		}
	}


	if (tens == 1) {
		switch (singles) {
		case 0:
			cout << "ten";
			break;
		case 1:
			cout << "eleven";
			break;
		case 2:
			cout << "twelve";
			break;
		case 3:
			cout << "thriteen";
			break;
		case 4:
			cout << "fourteen";
			break;
		case 5:
			cout << "fiveteen";
			break;
		case 6:
			cout << "sixteen";
			break;
		case 7:
			cout << "seventeen";
			break;
		case 8:
			cout << "eightteen";
			break;
		case 9:
			cout << "nineteen";
			break;
		}

	}

	else if (tens == 2)
	{
		cout << "twenty";
	}

	else if (tens == 3) {
		cout << "thirty";
	}

	if (tens == 2 || tens == 3) {

		switch (singles) {
		case 1:
			cout << "one";
			break;

		case 2:
			cout << "two";
			break;


		case 3:
			cout << "three";
			break;

		case 4:
			cout << "four";
			break;

		case 5:
			cout << "five";
			break;

		case 6:
			cout << "six";
			break;

		case 7:
			cout << "seven";
			break;

		case 8:
			cout << "eight";
			break;

		case 9:
			cout << "nine";
			break;

		case 10:
			cout << "ten";
			break;

		}
	}
}