#include "StandaloneExitChoice.h"
#include "pch.h"

namespace stdln {
	void newInstance::initialiseThread(void (*function)(), newInstance* object) {
		
		object->thread_ptr = new std::thread(function);
		return;
	}
	void newInstance::unititialiseThread(std::thread* _THREAD) {
		delete _THREAD;
		return;
	}
}