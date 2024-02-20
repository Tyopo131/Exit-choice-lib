#include "pch.h"
#include "linker.h"
#include <conio.h>
using namespace std;
namespace stdln {
	char restartKey1, restartKey2, exitKey1, exitKey2;
	char key1, key2, okey1, okey2;
	void exitchoice() {
		char keyHit;
		while (true) {
			if (_kbhit()) {
				keyHit = _getch();
				if (keyHit == key1 || keyHit == key2 || keyHit == restartKey1 || keyHit == restartKey2) {
					callmain();
				}
				else if (keyHit == okey1 || keyHit == okey2 || keyHit == exitKey1 || keyHit == exitKey2) return;
			}
		}
	}
}