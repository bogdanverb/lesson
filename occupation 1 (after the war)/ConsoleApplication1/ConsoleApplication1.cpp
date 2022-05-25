// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    int a = 0;
    char stroka[128];
    int b = 0;
    printf("Enter your age\n");
    scanf_s("%d", &a);
    printf("Enter your height\n");
    scanf_s("%d", &b);
    printf("Enter your name\n");
    cin >> stroka;
    printf("%s, height :  %d, age:  %d\n", stroka, b, a);

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
