#include <iostream>
#include <string>
#include <stdio.h>
#include <chrono>
#include <thread>
using namespace std;
int main() {
    cout << "Enter your name\n";
    string name;
    cin >> name;
    cout << "Hi " << name <<  ", please enter the amount of people going on the tour\n";
    int people;
    cin >> people;
    int bussesNeeded = people/60;
    int remaining = (people%60);
    int vansNeeded;
    if (remaining%7 == 0) {
        vansNeeded = remaining / 7;
    }
    else{
        vansNeeded = (remaining / 7) + 1;
    }
    cout << "Number of Busses needed: " << bussesNeeded << "\nNumber of Vans needed: " << vansNeeded << "\n";
}
