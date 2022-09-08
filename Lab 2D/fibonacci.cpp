/*
    Author: Shahzaib Fareed
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 2D

    In this assignment I am told to create and code a fibonacci sequence.
    The rules of it have been given and it is created and printed.
    You can see that once the numbers get extremely large they begin to diverge and change from negative to positive consistently.
    
*/

#include <iostream>

int main() {
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int i = 0; i < 60; i++){
        std::cout << fib[i] << "\n";
    }
}