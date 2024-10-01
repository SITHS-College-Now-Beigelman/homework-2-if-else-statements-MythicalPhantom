//Jefferson Zheng
//October 1, 2024
//Homework 2 Part 1

#include <iostream>

using namespace std;

int main() {
    //Part 1
    cout << "Part 1" << endl;
    //Declare Integer Variables month and day
    int month, day;

    //User Input
    cout << "Date (MM DD): ";
    cin >> month >> day;

    //Uses month and day to Find the Current Season
    if ((month == 3 and day >= 21) || (3 < month && month < 6) || (month == 6 and day <= 20)) {
        cout << "It is now Spring!" << endl;
    } else if ((month == 6 and day >= 22) || (6 < month && month < 9) || (month == 9 and day <= 22)) {
        cout << "It is now Summer!" << endl;
    } else if ((month == 9 and day >= 23) || (9 < month && month < 12) || (month == 12 and day <= 21)) {
        cout << "It is now Fall!" << endl;
    } else {
        cout << "It is now Winter!" << endl;
    }
}

/*
Part 1
Date (MM DD): 10 01
It is now Fall!
*/