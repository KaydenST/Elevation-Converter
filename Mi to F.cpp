#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << endl << " Miles to Feet Converter. " << endl;
    
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
                 cout << endl << "Enter a distance in miles:  ";
                 cin >> m;
                 float f = m * 5280;
                 cout << endl << "The distance in feet is:  " << f << endl;
                 }
}
