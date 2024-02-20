#include "pch.h"
#include <iostream>
void main();
namespace stdln {
	void callmain() {
		std::cout << "\n";
		main();
	}
	void callmain(int newLines) {
		int count;
		for (count = 0; count <= newLines; count++) { 
			/* Lets the developer using the library
			specify the amount of newlines to output */
			std::cout << "\n";
		}
		main();
	}
}
