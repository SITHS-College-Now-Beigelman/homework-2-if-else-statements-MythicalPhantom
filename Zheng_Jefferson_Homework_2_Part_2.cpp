//Jefferson Zheng
//October 1, 2024
//Homework 2 Part 2

#include <iostream>

using namespace std;

int main() {
    //Part 2
    cout << "Part 2" << endl;

    //Declare Variables for Scores, Minimum, and Maximum
    double score, score2, score3, score4, score5, score6, minimum, maximum;

    //User Input

    cout << "Judge Scores: ";
    cin >> score >> score2 >> score3 >> score4 >> score5 >> score6;
    
    //Find the Maximum and Minimum Scores
    minimum = maximum = score;
    if (score2 < minimum)
        minimum = score2;
    if (score3 < minimum)
        minimum = score3;
    if (score4 < minimum)
        minimum = score4;
    if (score5 < minimum)
        minimum = score5;
    if (score6 < minimum)
        minimum = score6;
    if (score2 > maximum)
        maximum = score2;
    if (score3 > maximum)
        maximum = score3;
    if (score4 > maximum)
        maximum = score4;
    if (score5 > maximum)
        maximum = score5;
    if (score6 > maximum)
        maximum = score6;

    //Prints The Final Score
    cout << "\nFinal Score: " << ((score + score2 + score3 + score4 + score5 + score6 - minimum - maximum)/4);

    //Exits Successfully
    return 0;
}

/*
Part 2
Judge Scores: 0.0 1.0 2.0 3.0 4.0 5.0

Final Score: 2.5
*/