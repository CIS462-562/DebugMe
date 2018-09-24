#include "pch.h"
#include "CallTraceModule.h"
#include <stdexcept>

namespace
{
  void Func4()
  {
    throw std::runtime_error("Failed in Func4");
  }

  void Func3()
  {
    Func4();
  }

  void Func2(int value)
  {
    Func3();
  }

  void Func1(int value)
  {
    const int newValue = value * 6;
    Func2(newValue);
  }
}

void CallTraceModule::DoSomething(int num)
{
  const int b = 5 * num;
  Func1(b);
}
