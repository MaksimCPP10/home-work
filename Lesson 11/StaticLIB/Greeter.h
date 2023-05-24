#pragma once
#include <iostream>

class Greeter
{
protected:
	std::string UserName;
public:
	std::string greet(std::string name);
};
