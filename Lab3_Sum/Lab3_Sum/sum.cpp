// finds maximum number input
// demonstrates "iterate and keep track" idiom
// Dylan Strnad
// 1/29/2024


#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

	

	cout << "Input number [0 to quit]: ";
	
	int n = 1;
	int sum = 0;

	while (n != 0) {
		cin >> n;
		if (n%2 != 0) 
			
			sum = sum + n;
	}

	cout << sum << endl;

}