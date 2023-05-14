#pragma once
#include <iostream>

class Counter
{
private:
    int counter;

public:
    Counter();
    Counter(int custom_counter);
    void add();
    void subtract();
    void print_counter();
};

