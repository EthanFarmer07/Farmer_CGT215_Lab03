// Farmer_CGT215_Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\nYour Selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B) {
    // Asks user for input.
    cout << "Please enter the first value: ";
    cin >> A;
    cout << "Please enter the second value: ";
    cin >> B;
}

void firstChoice(float A, float B) {
    float C;
    C = A + B;
    cout << "\n";
    cout << A;
    cout << " + ";
    cout << B;
    cout << " = ";
    cout << C;
}

void secondChoice(float A, float B) {
    float C;
    C = A - B;
    cout << "\n";
    cout << A;
    cout << " - ";
    cout << B;
    cout << " = ";
    cout << C;
}

void thirdChoice(float A, float B) {
    float C;
    C = A * B;
    cout << "\n";
    cout << A;
    cout << " * ";
    cout << B;
    cout << " = ";
    cout << C;
}

void fourthChoice(float A, float B) {
    float C;
    C = A / B;
    cout << "\n";
    cout << A;
    cout << " / ";
    cout << B;
    cout << " = ";
    cout << C;
}

int main() {
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
    if (choice == 3) {
        thirdChoice(A, B);
    }
    if (choice == 4) {
        fourthChoice(A, B);
    }
    return 0;
}