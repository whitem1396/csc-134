// CSC 134
// M4T2 Chapter 7 Listings
// 02/19/2019
// Matthew White

#include <iostream>

using namespace std;

int main()
{
    // Listing 7-1

    int NumberOfPotholes = 532587;
    cout << &NumberOfPotholes << endl;

    // Listing 7-2
    /* int NumberOfPotholes; */

    int *ptr;
    ptr = &NumberOfPotholes;
    *ptr = 6087;
    cout << NumberOfPotholes << endl;

    // Listing 7-3

    /* int NumberOfPotholes; */
    /* int *ptr = &NumberOfPotholes; */
    int SaveForLater;
    *ptr = 6087;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl;

    // Listing 7-4

    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString << endl;

    // Listing 7-5

    string HorribleMovie;
    /* string *ptrToString; */

    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    for (unsigned i = 0; i < HorribleMovie.length(); i++){
        cout << (*ptrToString) [i] << " ";
    }
    cout << endl;


    // Listing 7-6

    int ExpensiveComputer;
    int CheapComputer;
    int *ptrToComp;

    ptrToComp = &ExpensiveComputer;
    *ptrToComp = 2000;
    cout << *ptrToComp << endl;

    ptrToComp = &CheapComputer;
    *ptrToComp = 500;
    cout << *ptrToComp << endl;

    ptrToComp = &ExpensiveComputer;
    cout << *ptrToComp << endl;

    return 0;
}
