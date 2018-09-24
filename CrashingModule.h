#pragma once
#include "IModule.h"

class CrashingModule : public IModule
{
public:
  void DoSomething(int num) override;
};
