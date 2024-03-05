#include "StandaloneExitChoice.h"
#include "pch.h"

namespace stdln {
	void newInstance::initialiseThread(void (*function)(), newInstance* object) {
		
		object->thread_ptr = new std::thread(function);
		return;
	}
	void newInstance::uninitialiseThread(std::thread* _THREAD) {
		delete _THREAD;
		return;
	}
}