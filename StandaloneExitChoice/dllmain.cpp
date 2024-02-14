#include "pch.h"
#include "linker.h"
#include <conio.h>
using namespace std;
namespace stdln {
	char key1, key2, okey1, okey2;
	void exitchoice() {
		char keyHit;
		while (true) {
			if (_kbhit()) {
				keyHit = _getch();
				if (keyHit == key1 || keyHit == key2) {
					callmain();
				}
				else if (keyHit == okey1 || keyHit == okey2) return;
				
				

			}
		}
	}
}