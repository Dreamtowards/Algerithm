﻿
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()



project ("Algerithm")

include_directories("src")
include_directories("lib/physx/include")

add_executable (Algerithm 
	"src/algerithm/Algerithm.cpp" "src/algerithm/util/BenchmarkTimer.h" "src/algerithm/util/BenchmarkTimer.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Algerithm PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
