#include "my.h"
#include <iostream>
#include <ctime>

void WaitClock()
{
    std::clock_t start_time = std::clock();
    while ((std::clock() - start_time) < CLOCKS_PER_SEC * 2);
}
