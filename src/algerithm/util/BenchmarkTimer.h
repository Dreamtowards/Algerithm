
#pragma once

#include <stdint.h>

namespace algerithm
{
	// An execution time measurer, starting when the object is constructed, and ends when the done() function or destructor is called
	class BenchmarkTimer
	{
	public:
		// @_tmr: a pointer to a number, If not nullptr, this number will be added for the entire measurement time (in seconds), at the end of the measurement
		//        this is useful when you want sum-up or get the measurement time.
		// @_msg: a message that will be print at the end of the measurement unless it's a nullptr. "{}" is the time e.g. "85.616320ms"
		BenchmarkTimer(float* _ptm = nullptr, const char* _msg = " in {}.\n");

		// there will auto call done();
		~BenchmarkTimer();

		// End of Measurement
		void done();

	private:

		int64_t m_TimeBegin = 0;

		const char* m_EndMsg = nullptr;
		float* m_pTimeAppend = nullptr;  // f32 or f64?

		bool m_Done = false;
	};

	// simply with default measurement message.
	#define BENCHMARK_TIMER algerithm::BenchmarkTimer _tm

	// with Custom Message
	#define BENCHMARK_TIMER_MSG(msg) algerithm::BenchmarkTimer _tm(nullptr, msg)

	// pure Time Accumulator.
	#define BENCHMARK_TIMER_TMR(ptm) algerithm::BenchmarkTimer _tm(ptm, nullptr)

}