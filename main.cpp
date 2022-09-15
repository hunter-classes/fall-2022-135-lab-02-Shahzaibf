/*
    Author: Shahzaib Fareed
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 2B

    In this lab I will have to make use of a header file.
    I have made a seperate file for the function "print_interval."
    then included the header file to create a main with nothing but the function.
*/

#include <iostream>
#include "funcs.h"

int main () {
    print_interval(-5,10);
    std::cout << "\n";
    
    print_interval(0,10);
    std::cout << "\n";  

    print_interval(-5,0);
    std::cout << "\n";  

    print_interval(-10,10);
    std::cout << "\n";
}