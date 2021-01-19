/* CSCI 261 Lab 1C l: Geometric Calculations
 *
 * Dillon Anderson*/
#include <iostream>
using namespace std;
int main() {
    int length = 17;
    int width = 17;
    int height = 2;
    cout << "Enter length of box here: ";
    cin >> length;
    cout << "Enter width of box here: ";
    cin >> width;
    cout << "Enter height of box here: ";
    cin >> height;
    int volume = length * width * height;
   cout << "The volume of your box is: ";
    cout << volume << endl;
    cout << endl;


const double PI = 3.14159;
        double r;
        double vol_Of_C;
        cout << "Enter the radius of the circle: ";
        cin >> r;
    vol_Of_C = r * r * PI;
        cout << "The volume of the circle is: ";
        cout << vol_Of_C;

    return 0;
}
