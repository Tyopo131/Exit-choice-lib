#pragma once
#include <thread>
namespace stdln
{
	class newInstance {
	public:
		void initialise(void (*function)(), newInstance* object);
		std::thread* thread_ptr;
	};
}
