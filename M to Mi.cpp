#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << endl << " Meters to Miles Converter. " << endl;
    
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
           
           float m = 0;
           
           while (true) {
                 cout << endl << "Enter a distance in meters:  ";
                 cin >> m;
                 float mi = m * 3.280839895 / 5280;
                 cout << endl << "The distance in miles is:  " << mi << endl;
                 }
}
