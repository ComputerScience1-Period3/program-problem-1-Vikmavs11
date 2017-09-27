/* Vikram Basude - 9-21-17 Period: 3
Assignment Name: Display text
This is the display text for us to tryout and learn*/
// Libraries
#include <iostream> // endl << >> cin cout 
#include <conio.h> // gives access to _kbhit() and _getch() for the pause() function

// Namespaces
using namespace std;

// Functions
void pause() { // acts as system("pause")
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

// MAIN
void main() {
	char x = 'l'; // stores the value of l 
				  // Display Text
	cout << "He" << x << x << "o Wor" << x << "d!" << endl;
	cout << "Hello World!" << endl;
	cout << "This is Room K" << 226 << endl;
	pause(); // to see what was displayed
}