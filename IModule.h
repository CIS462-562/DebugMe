#pragma once

class IModule
{
public:
  virtual ~IModule() = default;
  virtual void DoSomething(int num) = 0;
};
