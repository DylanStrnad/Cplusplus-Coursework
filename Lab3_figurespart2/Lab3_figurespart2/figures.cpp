#include <iostream>

using std::cout; using std::endl; using std::cin;

int main() {

	cout << "Enter Figure number, and character: ";

	int n;
	cin >> n;
	char ch;

	cin >> ch;

	// nested loops

	for (int i = 0; i < n; i++) { // outer loop
		for (int j = 0; j < n; j++) {  // inner loop
			cout << ch;

		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n  ; i++) { // outer loop
		for (int j = 0; j < n ; j++) {  // inner loop

			if (i == 0 || j == 0 || i == n - 1 || j == n - 1)



				cout << ch;

			else

				cout << " ";

		}
		cout << endl;
	}


   cout << endl;

for (int i = 0; i < n; i++) { // outer loop
	for (int j = 0; j < n; j++) {  // inner loop

		if (i==j)



			cout << ch;

		else

			cout << " ";

	}
	cout << endl;
}

cout << endl;



for (int i = 0; i < n; i++) { // outer loop
	for (int j = 0; j < n; j++) {  // inner loop

		if ((i+j) == (n-1))



			cout << ch;

		else

			cout << " ";

	}
	cout << endl;
}

cout << endl;

for (int i = 0; i < n; i++) { // outer loop
	for (int j = 0; j < n; j++) {  // inner loop

		if ((i + j) == (n - 1) || (i == j) || (i == 0 || j == 0 || i == n - 1 || j == n - 1))



			cout << ch;

		else

			cout << " ";

	}
	cout << endl;
}
}



