

#include "Algerithm.h"
#include <algerithm/util/BenchmarkTimer.h>

static void Init();
static void RunMainLoop();
static void Destroy();

int main()
{
	Init();

	while (Algerithm::Running())
	{
		RunMainLoop();
	}

	Destroy();

	return 0;
}

static void Init()
{
	BENCHMARK_TIMER;


}

static void Destroy()
{

}

static void RunMainLoop()
{

}


bool& Algerithm::Running()
{
	static bool s_Running = false;
	return s_Running;
}