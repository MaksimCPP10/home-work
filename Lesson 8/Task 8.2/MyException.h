#pragma once

class MyException :public std::exception
{
public:
	MyException(const char* msg) :std::exception(msg)
	{

	}
	const char* what() const override
	{
		return "";
	}
};

