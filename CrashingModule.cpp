#include "pch.h"
#include "CrashingModule.h"
#include <stdexcept>

void CrashingModule::DoSomething(int num)
{
  throw std::runtime_error("Whoops!");
}
