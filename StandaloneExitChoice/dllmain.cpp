#include "StandaloneExitChoice.h"
#include "pch.h"

namespace stdln {
	void newInstance::initialise(void (*function)(), newInstance* object) {
		
		object->thread_ptr = new std::thread(function);
		return;
	}
}