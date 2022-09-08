/*
    Author: Shahzaib Fareed
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 2C

    In this assignment, an array with size of 10 will be created. 
    Every value will have a 1. 
    Using a do while loop I will ask the user for an index and value.
    if the index is from 0 to 10 then it repeats.
    The index/value is changed.
*/

#include <iostream>

int main() {
    int index = 1;
    int value;
    int myData[10];
    for (int i = 0; i < 10;i++) {
        myData[i] = 1;
    }
    
    do {
        std::cout << "\n";
        
        for (int i = 0; i < 10;i++){
            std::cout << myData[i] << " ";
        }
        std:: cout << "\n\n";

        std::cout << "Input index: ";
        std::cin >> index;
        
        std::cout << "Input value: ";
        std::cin >> value;

        if (index > -1 && index < 10){
            myData[index] = value;
        } else {
            std::cout << "Index out of range. Exit.";
        }
    } while (index > -1 && index < 10);
}