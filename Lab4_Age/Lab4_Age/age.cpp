// Dragons Age
// Dylan Strnad
// 1/05/2024

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout; using std::cin; using std::endl;

int main() {
    srand(time(nullptr)); // giving random number generator
    // unpredictable seed
// srand(2);       // giving predictable seed

   

    cout << "Dragons Age is between 0 and "
        << 100 << endl;

    int dragonAge = rand() % 100 + 1; // Age of Dragon

    int date= 1000;

   int answer;
   do {

   

       date +=  5 ;

       cout << "Year " << date << ":Hello, fair maiden.I am a fearsome dragon.How old am I ? " << endl;
       cout << "Guess the Age: ";
       cin >> answer;



       if (answer < dragonAge) {

           cout << "I am older!";
           date += 5;
           dragonAge += 5;
       }
       else if (answer > dragonAge){

           cout << "I am younger!";
           date += 5;
           dragonAge += 5;
       }
       else {


           cout << "got it!";
           break;
       }




   } while (answer != dragonAge);
   
}