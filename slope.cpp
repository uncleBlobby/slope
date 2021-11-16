#include <iostream>

using namespace std;

int main()
{
    // Program introduction
    cout << endl;
    cout << "                         Slope of a Line" << endl;
    cout << "*******************************************************************" << endl;
    cout << "This program will calculate the slope of a line between two points." << endl;
    cout << endl;

    // Prompt user to input two sets of coordinates, stored in double
    double x0, y0, x1, y1;
    cout << "Please enter the coordinates for the first point (x0, y0): ";
    cin >> x0 >> y0;
    cout << "Please enter the coordinates for the second point (x1, y1): ";
    cin >> x1 >> y1;
    cout << endl;

    // Calculate slope and output result
    cout << "The slope of the line that connects (" << x0 << ", " << y0 << ") and (" << x1 << ", " << y1 << ") is: " << ((y1 - y0) / (x1 - x0)) << endl;
    cout << endl;

}