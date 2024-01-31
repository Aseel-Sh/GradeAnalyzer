#include <iostream>
#include "Lab6_Header.h"
using namespace std;

int main() {
    float grades[ROWS][COLS]; //2D array for grades
    float maximum[ROWS]; //aray to store maximum grades for each student
    int num;

    cout << "How many students in the class? ";
    cin >> num; //get number of students

    for (int row = 0; row < num; row++) {
        //enter the 6 quiz grades for each student
        for (int col = 0; col < COLS; col++) {
            cout << "Enter quiz #" << col + 1 << " for student #" << row + 1 << ": ";
            cin >> grades[row][col];
        }
    }

    //call function computeMaximum to find max grade
    computeMaximum(grades, num, maximum);

    cout<< "Grades: \n";
    for (int row = 0; row < num; row++) {
        //inserted brackets
        cout << "[";
        for (int col = 0; col < COLS; col++) {
            cout << grades[row][col] << " ";
           //inserted if statment to add commas after each grade except last grade
           if (col < COLS - 1){
                cout << ", ";
            }
        }
        //inserted brackets
        cout << "] \n";
        cout << endl;
    }
    

    cout << "The maximum grades: ";
    //call func showArray to display the highest grades
    showArray(maximum, num);
    cout << endl;

    return 0;
}
