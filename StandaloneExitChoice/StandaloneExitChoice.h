#pragma once
#include <thread>
namespace stdln
{
	class newInstance {
	public:
		void initialiseThread(void (*function)(), newInstance* object);
		std::thread* thread_ptr;
		void uninitialiseThread(std::thread*);
	};
}
