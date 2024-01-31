#include "Lab6_Header.h"

void computeMaximum(float grades[][COLS], int num, float maximum[]) {

    //loop that iterates over each student (row) in the grades array.
    for (int row = 0; row < num; row++) {
        float maxGrade = grades[row][0]; //Initializes maxGrade with the first grade of the current student.
        //This is a loop that iterates over each quiz (column) for the current student
        for (int col = 1; col < COLS; col++) {
            //re-assigning max grade if found
            if (grades[row][col] > maxGrade) {
                maxGrade = grades[row][col];
            }
        }
        //storing the maximum grade for each student in the array maximum
        maximum[row] = maxGrade;
    }
}
