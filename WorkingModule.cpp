#include "pch.h"
#include "WorkingModule.h"
#include <iostream>

void WorkingModule::DoSomething(const int num)
{
  int first = -1;
  int second = 1;

  for (int idx = 0; idx < num; ++idx)
  {
    const int third = first + second;
    std::cout << third << ",";

    first = second;
    second = third;
  }

  std::cout << std::endl;
}
