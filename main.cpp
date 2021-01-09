#include <iostream>
#include <string>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::string;
int main()
{
    int numRand = 1;
    int disFlag = 1;
    long double ranGen = 1;
    long double simType = 1;
    long double simCycle = 1;
    long double simScc = 0;
    cout << "Random Chance Simulator C++ Remake V1\n";
    cout << "--------------------------\n";
    cout << "numRand>"; cin >> numRand;
    cout << "disFlag>"; cin >> disFlag;
    cout << "simCycle>"; cin >> simCycle;
    while (simCycle >= 0){
        ranGen = rand() % numRand + 1;
        simCycle -= 1;

        if (disFlag >= 1){
            cout << cout << "Generated:"; cout << ranGen; " Cycles left:"; cout << simCycle; cout << " Successes:"; cout << simScc; cout << "\n";
        }
        if (ranGen == 1){
            simScc += 1;
        }

}
cout << "Successes:"; cout << simScc; cout << "\n";
cout << "Press Enter to exit."; cin >> simCycle;
}

