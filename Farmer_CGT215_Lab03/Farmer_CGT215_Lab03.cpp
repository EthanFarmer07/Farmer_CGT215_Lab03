// Farmer_CGT215_Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int choice;
    float A;
    float B;
    printMenu(choice);
    getChoices(A, B);
    if (choice == 1) {
        firstChoice(A, B);
    }
    if (choice == 2) {
        secondChoice(A, B);
    }
    return 0;
}