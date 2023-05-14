#include "Counter.h"

Counter::Counter()
{
}

Counter::Counter(int custom_counter)
{
	counter = custom_counter;
}

void Counter::add()
{
	counter++;
}

void Counter::subtract()
{
	counter--;
}

void Counter::print_counter()
{
	std::cout << "\n" << counter << "\n";
}
