#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << " Feet to Meters Converter. " << endl;
    
    short int choice = 0;
    
     while (true) {
   cout << "Press Ctrl + C anytime to quit. Press any key to continue: ";
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Feet;
		}
	}
	
	Feet:
           
           float f = 0;
           
           while (true) {
                 cout << endl << "Enter a distance in feet:  ";
                 cin >> f;
                 float m = f * 0.3048;
                 cout << endl << "The distance in meters is:  " << m << endl;
                 }
}
