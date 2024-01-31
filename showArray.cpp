#include <iostream>
#include "Lab6_Header.h"
using namespace std;


void showArray(float array[], int size) {

    //taking the maxmimum array and iterating through it to print it
    for (int row = 0; row < size; row++) {
        cout << maximum[row];
        //adding comas after each grade except last grade
        if (row < size - 1) {
                cout << ", ";
            }  
    }
    cout << endl;
}
