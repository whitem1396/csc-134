// CSC 134
// M2T1
// 02/5/2019
// Matthew White

#include <iostream>

using namespace std;

int main()
{
    int grade;
    int numTests;
    int average;
    int total=0;
    int count = 1;

    //ask for number of tests
    cout << "How many tests to average? ";
    cin >> numTests;

    for (int count=1; count <= numTests; count++){
        // within loop, ask for a test grade
        cout << "Grade for test #" << count << " ";
        cin >> grade;

        // add it to the total
        total = total + grade;

    }
    cout << "Total = " << total << endl;

    // find average by dividing total number of tests
    average = total / numTests;

    cout << "The average is " << average << endl;


    // Building the While loop

    int grade2;
    int numTests2;
    int average2;
    int total2=0;

    //Ask for number of tests

    cout << "How many tests to average? ";
    cin >> numTests2;


    while (count <= numTests2)
    {
        cout << count << endl;
        cout << "What is the grade for test #" << count << " ";
        cin >> grade2;
        count++;


         total2 = total2 + grade2;
    }




    average2 = total2 / numTests2;

    cout << "The average is " << average2 << endl;



    return 0;
}
