#pragma once
#ifdef DYNAMICLIB_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else
#define DYNAMICLIB_API __declspec(dllimport)
#endif
#include<iostream>

class Leaver
{
protected:
	std::string UserName;
public:
	DYNAMICLIB_API std::string leave(std::string name);
};

