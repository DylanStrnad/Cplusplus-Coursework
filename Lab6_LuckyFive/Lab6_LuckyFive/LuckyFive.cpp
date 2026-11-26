// Lottery Numbers
// Lab_6 LotterNumbers, CS1A, section 001
// Dylan Strnad
// 02/19/2024

#include <iostream>
#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;
 

using std::cout; using std::endl; using std::cin;

void assign(int a[]);

bool check(int[], int);

void draw(int[]);

int entry();

void printOut(int[]);

int main() {

    srand(time(0)); // giving random number generator

    const int arraySize = 10;
    int chosen[arraySize] = {1, 5 , 11, 15, 25, 33, 45, 56, 77, 81};
    int uInput; // values entered by user

    assign(chosen);
    draw(chosen);

    for (int i = 0; i < 5; ++i) {
        int s = entry();
        if (check(chosen, s) == true) {
            cout << "You won the lottery!" << endl;
            break;
        } 
    }

    printOut(chosen);

}

void assign(int a[]) {
    int i = 0;
    int arraySize = 10;
    for (int i = 0; i < arraySize; ++i)
        a[i] = -1;
}

bool check(int a[], int b) {
    int arraySize = 10;
    bool inArray;

    for (int i = 0; i < arraySize; ++i)
        if (a[i] == b) {
            inArray = true;
            break;
        } else {
            inArray = false;
        }
    return inArray;
}

void draw(int chosen[]) {
    int selectedNums = 0;
    while (selectedNums < 10) {
        int r = rand() % 100;
        if (check(chosen, r) == false) {
            chosen[selectedNums] = r;
            ++selectedNums;
        }
    }
}

int entry() {
    int a = 0;
    cout << "input a number(0-99):";
    cin >> a;

    return a;
}

void printOut(int chosen[]) {
    int i;
    cout << "lottery numbers:";
    for (i = 0; i < 10; i++) {
        cout << chosen[i] << " ";
    }
}