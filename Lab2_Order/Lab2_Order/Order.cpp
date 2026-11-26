// the program attempts to sort three integers
// in increasing/decreasing order
// Dylan Strnad
// 1/23/2024

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    //increasing/decreasing
    cout << "increasing or decreasing order[i/d]:";
    char ans;
    cin >> ans;

    if (ans == 'i'){

        if (x > y) {
        const int tmp = x;
        x = y;
        y = tmp;
    }

    // orders y and z
    if (y > z) {
        const int tmp = y;
        y = z;
        z = tmp;
    }

    if (x > y) {
        const int tmp = x;
        x = y;
        y = tmp;
    }
    }

    if (ans == 'd') {

        if (x < y) {
        const int tmp = x;
        x = y;
        y = tmp;
    }

    // orders y and z
    if (y < z) {
        const int tmp = y;
        y = z;
        z = tmp;
    }

    if (x < y) {
        const int tmp = x;
        x = y;
        y = tmp;
    }
    }
        

   // orders x and y
    

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}