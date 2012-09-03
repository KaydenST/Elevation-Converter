#include <iostream>
using namespace std;

int main () {

string input = "";

    cout << endl << " Feet to Miles Converter. " << endl;
    
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
           
           float f = 0;
           
           while (true) {
                 cout << endl << "Enter a distance in feet:  ";
                 cin >> f;
                 float m = f / 5280;
                 cout << endl << "The distance in miles is:  " << m << endl;
                 }
}
