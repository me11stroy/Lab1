// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    char d;
    int p = 1;
    while (p != 2)
    {
        cout << ("1 - calculator\n2 - exit\n");
        cin >> p;
        if (p != 1) break;
        cout << "Enter 1 number:";
        cin >> a;
        cout << "Enter 2 number:";
        cin >> b;
        cout << "Enter operation:";
        cin >> d;
        switch (d)
        {
        case '+': c = a + b; break;
        case '-': c = a - b; break;
        case '*': c = a * b; break;
        case '/': c = a / b; break;
        default:
            cout << ("Wrong action\n");
            continue;
        }
        cout << ("Result = %l", c) << endl;
        
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
