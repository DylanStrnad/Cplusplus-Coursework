// broken calculator 
// Dylan Strnad
// 2/05/2024

#include <iostream> 

using std::cout; using std::cin; using std::endl;

int main() {

	cout << "enter dividend: ";
	int dividend;
	cin >> dividend;

	cout << "Enter divisor: ";
	int divisor;
	cin >> divisor;

	double quotient = static_cast<double> (dividend) / divisor;
	cout << "quotient: " << quotient << endl;;
}