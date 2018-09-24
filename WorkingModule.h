#pragma once
#include "IModule.h"

class WorkingModule : public IModule
{
public:
  void DoSomething(int num) override;
};
