/*
Author: Rachel Ng
Course: CSCI-136
Instructor: Zamansky
Assignment: Lab1A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/


#include <iostream>
using namespace std;

int smaller (int a, int b) 
{
    if (a > b) {
        return b;
    }
    else {
        return a;
    }    
}

int main() {
    cout << "Enter the first number: ";
    int a; 
    int b;
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "\n";
    cout << "The smaller of the two is " << smaller(a,b);
    cout << "\n";
}

