#include "pch.h"

#include "WorkingModule.h"
#include "CrashingModule.h"
#include "CallTraceModule.h"
#include <iostream>
#include <chrono>
#include <thread>

const int DO_SOMETHING_NUM = 5;

WorkingModule module1;
CrashingModule module2;
CallTraceModule module3;

#define ENABLE_MODULE_0
// #define ENABLE_MODULE_1
// #define ENABLE_MODULE_2
// #define ENABLE_MODULE_3

int main()
{
  // Module 0:
  // 1. Starting, Stopping Debugging
  // 2. Configuration: Debug Release Arch
  // 3. Pause and Resume
  // 4. Add Breakpoints, Conditional Breakpoints
#ifdef ENABLE_MODULE_0
  int a = 5;
  std::this_thread::sleep_for(std::chrono::milliseconds(5000));
  a = 6;
  std::cout << "This Runs \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(5000));
  a = 7;
  std::cout << "This Runs \n";
  std::this_thread::sleep_for(std::chrono::milliseconds(5000));
#endif

  // This Module will tell us:
  // Step In, Out, Over
  // Locals
#ifdef ENABLE_MODULE_1
  module1.DoSomething(DO_SOMETHING_NUM);
#endif

  // This Module will tell us:
  // Code Crash & Call Stack
#ifdef ENABLE_MODULE_2
  int a = 5;
  module2.DoSomething(DO_SOMETHING_NUM);
  a = 7;
#endif

  // This Module will tell us:
  // A more populated Call Stack & Locals per function context
#ifdef ENABLE_MODULE_3
  module3.DoSomething(DO_SOMETHING_NUM);
#endif

}

