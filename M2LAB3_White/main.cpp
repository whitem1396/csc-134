// CSC 134

// M2LAB3

// White Matthew

// 01/31/2019

#include <iostream>

using namespace std;

int main()
{
    /*
    This program will calculate letter grades given a number grade.
    Adding:
    - enter 3 grades each run
    - re-enter invalid grades
    */


    float numberGrade = 0;
    char letterGrade;
    bool isValid = false;
    int testNum;


            cout << "Grade Entry Program" << "\n" << endl;

        // user will enter 3 test grades

        for (int testNum = 1 ; testNum < 4; testNum++){
            cout << "Enter grade for test #" << testNum << "\n" << endl;
            isValid = false;


        // ask the user for number grade
        // must be > 0 and no greater than 100

      while (!isValid) {
            cout << "Enter Number Grade" << endl;
            cin >> numberGrade;
        if (numberGrade > 0 && numberGrade <= 100)
                isValid = true;
        else {
            cout << "Invalid number, try again." << endl;
            }

        }

        // convert to letter grade
        if (numberGrade >= 89.5)
        {
            letterGrade = 'A';
        } else
        if (numberGrade >= 79.5)
        {
            letterGrade = 'B';
        } else
        if (numberGrade >= 69.5)
        {
            letterGrade = 'C';
        } else
        if (numberGrade >= 59.5)
        {
            letterGrade = 'D';
        } else
        if (numberGrade < 59.5)
        {
            letterGrade = 'F';
        }

        // tell them the letter grade
        cout << "The letter grade is: " << letterGrade << "\n" << endl;




        }

        return 0;
    }
