#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << " Meters to Feet Converter. " << endl;
    
    short int choice = 0;
    
     while (true) {
   cout << "Press Ctrl + C anytime to quit. Press any key to continue: ";
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Meters;
		}
	}
	
	Meters:
           
           float m = 0;
           
           while (true) {
                 cout << endl << "Enter a distance in meters:  ";
                 cin >> m;
                 float f = m * 3.28084;
                 cout << endl << "The distance in feet is:  " << f << endl;
                 }
}
