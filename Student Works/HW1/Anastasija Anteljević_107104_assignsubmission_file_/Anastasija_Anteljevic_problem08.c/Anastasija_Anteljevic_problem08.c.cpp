// Anastasija_Anteljevic_problem08.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j;
    cout << "     " << 1;//5 space chars

    for (i = 2; i <= 10; ++i)
        cout << "    " << i;//4 space chars

    cout << endl;
    cout << "   ----|";

    for (i = 2; i <= 10; ++i)
        cout << "----|";

    cout << endl;

    for (i = 1; i <= 10; ++i)
    {
        cout << setw(2) << i << "|";

        for (j = 1; j <= 10; ++j)
            cout << setw(4) << j * i << "|";

        cout << endl;
        cout << " -|----";

        for (j = 2; j <= 9; ++j)
            cout << "|----";
        cout << "|----|";
        cout << endl;

    }
    return 0;
}
