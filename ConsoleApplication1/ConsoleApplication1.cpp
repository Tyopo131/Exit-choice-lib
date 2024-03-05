#include <iostream>
#include "../StandaloneExitChoice/StandaloneExitChoice.h"
std::thread* THREAD_PTR;
int main()
{
	stdln::newInstance firstInstance;
	firstInstance.funcPTR = exitChoiceFunction;
	firstInstance.initialise(firstInstance.funcPTR);
}
void exitChoiceFunction() {
	std::cout << "Hey";
	std::cin.get();

}