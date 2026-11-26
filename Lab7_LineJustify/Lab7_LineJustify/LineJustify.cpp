// justifies line
// Lab_7
// Dylan Strnad
// 3/13/24

#include <iostream>
#include <string>
#include <ctime>

using std::cout; using std::cin; using std::endl;
using std::string;

int main() {

    srand(time(NULL));

    cout << "enter a string:";
    string line;
    getline(cin, line);


    int x = line.find_first_of(",.!?:");

    cout << "size: " << line.size() << endl;

    const int lineSize = 80;     // line size must be 80

        while (line.size() < lineSize && x != line.size() - 1 && x != string::npos) { // loop for inserting space after period
            line.insert(x + 1, "  ");
            x = line.find_first_of(",.!?:", x + 1);
        }
        
        while (line.size() < lineSize) {           // loop for adding space to random point
            int randomVal = rand() % 79 +1;
            x = line.find(' ', randomVal);

            if(x != -1)
                line.insert(x + 1, 1, ' ');
        }
        
    cout << line << endl;

    cout << "line size:" << line.size();

    
}