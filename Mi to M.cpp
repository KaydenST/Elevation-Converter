#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << endl << " Miles to Meters Converter. " << endl;
    
    short int choice = 0;
    
     while (true) {
   cout << "Press any key to continue: ";
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Feet;
		}
	}
	
	Feet:
           
           float mi = 0;
           
           while (true) {
                 cout << endl << "Enter a distance in miles:  ";
                 cin >> mi;
                 float m = mi / 3.280839895 * 5280;
                 cout << endl << "The distance in meters is:  " << m << endl;
                 }
}
