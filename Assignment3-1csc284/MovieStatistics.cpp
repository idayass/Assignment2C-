#include "MovieStatistics.h"
#include<iostream>
#include "Statistics.h"
using namespace std;

void MovieStatistics::movieStatistics()
{
    int numberSurveyed;                                 // Number of students surveyed
    int* dataArray;                                     // Pointer to array of Number of movies each one has watch

    // Data entry of the number of students surveyed
    cout << "Enter the number of students surveyed: ";
    cin >> numberSurveyed;

    dataArray = new int[numberSurveyed];

    // Data entry and fill the array
    for (int i = 0; i < numberSurveyed; i++)
    {
        cout << "Enter number of movies seen by student '" << (i + 1) << "' : ";
        cin >> dataArray[i];
    }

    // Build the constructor based on data entered
    Statistics statistics(numberSurveyed, dataArray);

    //Display result of the statistics
    cout << "\t => The Average of movies seen by students                        : " << statistics.average() << endl;
    cout << "\t => The median of the array of statistics of movies               : " << statistics.median() << endl;
    cout << "\t => The greatest frequncy of a movie been seen by students (Mode) : " << statistics.mode() << endl;

}

int main()
{
    MovieStatistics ms;                 // Declare the object of class movieStatistics
    ms.movieStatistics();               // Cal the method to process data and display results
    return 0;
}
