#include <iostream>
#include "my.h"

//global variables

//structures;
struct debts {
    char name[50];
    double amount;
};

//templates
template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

//constants

//prototypes

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    int things[6] {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];
    for (int i(0); i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Listing Mr. E's sum of things:\n";
    ShowArray(things, 6);
    cout << "Listing Mr. E's sum of debts:\n";
    ShowArray(pd, 3);

    cout << endl << CinGetNumber<int>() << endl;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    T sum {0};
    for (int i(0); i < n; i++)
        sum += arr[i];
    cout << sum << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    T sum {0};
    for (int i(0); i < n; i++)
        sum += *arr[i];
    cout << sum << endl;
}
