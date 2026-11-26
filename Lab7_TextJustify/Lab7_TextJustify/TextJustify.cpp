// justifies text
// Lab_7
// Dylan Strnad
// 3/13/24

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using std::cout; using std::cin; using std::endl;
using std::ifstream; using std::ofstream;
using std::string;

int main() {

    std::ofstream outputFile("justify.txt");
    srand(time(NULL));
    string textFile = "unjustified.txt";


    // opening file
    ifstream fin(textFile);

    // printing
    string line;
    while (getline(fin, line)) {   // gets single line from text



        

        int x = line.find_first_of(",.!?:");

        const int lineSize = 80;     // max size line can be

        while (line.size() < lineSize && x != line.size() - 1 && line.size() > 40 && x != string::npos) {    // inserts spaces at period
                line.insert(x + 1, " ");

                if (line.size() < lineSize)      // checks if line is still less than 80
                    line.insert(x + 1, " ");

                x = line.find_first_of(",.!?:", x + 1);
            }

        


        const int minLineSize = 40;  // min size of line

        if (line.size() > minLineSize) {
            
            while (line.size() < lineSize) {     // adds space to random position
                int randomVal = rand() % 79;
                x = line.find(' ', randomVal);

                if (x != -1)
                line.insert(x + 1, 1, ' ');
            }
        }

        cout << line << endl;

        outputFile << line << endl;      // outputs to outfile file
    }
    
    outputFile.close();

    fin.close();

}







