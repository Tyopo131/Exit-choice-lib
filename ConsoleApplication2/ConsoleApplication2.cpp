// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "../StandaloneExitChoice/StandaloneExitChoice.h"

#include <iostream>
void thred();
int main()
{
    std::cout << "Hello World!\n";
    stdln::newInstance myInstance;
    myInstance.initialiseThread(thred, &myInstance);
    myInstance.thread_ptr->join();
    
}
void thred() {
    
}