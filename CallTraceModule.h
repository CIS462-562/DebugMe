#pragma once
#include "IModule.h"

class CallTraceModule : public IModule
{
public:
  void DoSomething(int num) override;
};
