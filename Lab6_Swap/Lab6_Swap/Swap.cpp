// the program attempts to sort three integers
// Lab6_Swap CS1A, section 001
// Dylan Strnad
// 02/19/2024

#include <iostream>

using std::cout; using std::endl; using std::cin;

void getNumbers(int&, int&, int&); // reads 3 integers from the keyboard.
void swap(int&, int&, int&); // interchanges 1st, 2nd, and 3rd parameter.
void showResults(int, int, int); // outputs parameters

int main() {

    int firstNum, secondNum, thirdNum;

    getNumbers(firstNum, secondNum, thirdNum);
    swap(firstNum, secondNum, thirdNum);
    showResults(firstNum, secondNum, thirdNum);

}


void getNumbers(int& in1, int& in2, int& in3) {
    cout << "Enter three integers: ";
    cin >> in1 >> in2 >> in3;
}

// interchanges
void swap(int& num1, int& num2, int& num3) {
    if (num1 > num2) {
        const int tmp = num1;
        num1 = num2;
        num2 = tmp;
    } if (num1 > num3) {
        const int tmp = num1;
        num1 = num3;
        num3 = tmp;
    } if (num2 > num3) {
       const int tmp = num2;
       num2 = num3;
       num3 = tmp;
   }
}

// outputs parameters
void showResults(int out1, int out2, int out3) {
    cout << "the sorted numbers are: " << out1 << " " << out2 << " " << out3 << endl;
}