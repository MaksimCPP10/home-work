#include "Greeter.h"


std::string Greeter::greet(std::string name)
{
	UserName = name;
	return "\n������������, " + UserName + "!\n";
}
