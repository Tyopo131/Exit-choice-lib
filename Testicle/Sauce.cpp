#include "../StandaloneExitChoice/StandaloneExitChoice.h"
#include <iostream>
int main() {
	std::cout << "hi\n";
	stdln::key2 = 's';
	stdln::key1 = 'S';
	stdln::okey1 = 'O';
	stdln::okey2 = 'o';
	stdln::exitchoice();
	return 0;
}