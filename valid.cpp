/*
    Author: Shahzaib Fareed
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 2A

    The program will get an input. 
    If the input is not 1-99 then it will repeatedly ask until given 1-99.
    When given a number 1-99 it will output that number squared.
*/

#include <iostream>

int main() {
    int input;
    std::cout << "Please enter an integer: ";
    std::cin >> input;
    
    while (input < 1 || input > 99) {
        std::cout << "Please re-enter: ";
        std::cin >> input;
    }
    
    input = input * input;
    std::cout << "\nNumber squared is " << input; 
}
