#include <iostream>
#include <cmath>
using namespace std;

int main() {
   
    double x1, y1, x2, y2, distance;

    
    cout << "Enter the x-coordinate of the first point:\t";
    cin >> x1;
    cout << "Enter the y-coordinate of the first point:\t";
    cin >> y1;

    cout << "Enter the x-coordinate of the second point:\t";
    cin >> x2;
    cout << "Enter the y-coordinate of the second point:\t";
    cin >> y2;

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 -y1) * (y2 -y1));
	cout << "The distance between the two points is: " << distance << endl;

    return 0;
}