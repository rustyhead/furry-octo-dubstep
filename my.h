#ifndef MY_H_
#define MY_H_

#include <iostream>

//templates
template <typename T> T CinGetNumber()
{
    using std::cin;
    T number;
    while ((cin >> number).fail())
    {
        cin.clear();
        while (cin.get() != '\n');
        std::cout << std::endl << "Incorrect input. Enter again: ";
    }
    cin.get();
    return number;
}

//prototypes
void WaitClock();

#endif
