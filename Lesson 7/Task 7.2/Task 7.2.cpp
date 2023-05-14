#include <iostream>
#define SUB(a,b)((a)-(b))

int main()
{
#ifndef SUB
#error SUB is not defined
#endif

    setlocale(0, "");
    std::cout << "\n\t\tЗадача 2. Макрос SUB.\n\n";

	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << "\n";
	std::cout << SUB(a, b) * c << "\n";
	std::cout << SUB(a, b + c) * c << "\n";
}