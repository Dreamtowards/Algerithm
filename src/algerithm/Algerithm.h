
#pragma once

// Algorithm
// Algerithm
// Algerthim

#include <string>

#include <algerithm/world/World.h>

namespace Algerithm
{
	
	void LoadWorld(const std::string& savedir);

	void UnloadWorld();

	World& GetWorld();


	/// Dispatch Command (@cmd '/' leading) or Send Message (not '/' leading)
	void DispatchCommand(const std::string& cmd);


	bool& Running();

	void Shutdown();  // Algerithm::Running() = false;

	// is calling from main thread.
	bool InMainThread();
}