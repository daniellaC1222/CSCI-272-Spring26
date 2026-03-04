// Name: Daniella Canning
// Course: CSCI 272
// Lesson Number: Lesson 4
// Code Topic: Copy Constructor Example
// Date: 03/03/2026

#include <car.h>
#include <User.h>
#include <bankAccounts.h>

int main(){
    
    car car1; // default constructor
    car car2("Honda","X", 2022); // parametrized constructor
    car car3(car2); //copy Constructor
    
    car* pCar1 = new car; // default constructor
    car* pCar2 = new car("Honda","X", 2022); // parametrized constructor
    car car[20]; // default constructor
    
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();
    
    pCar1->startEngine();
    pCar2->startEngine();
    car[0].startEngine();


return 0; 
}

// What you understood from this example
    // I understood how to use void functions in a class. I also learned how to use classes within the main funciton.
// Any difficulties you faced
    // I still need more practice and more comprehensice examples
// What you searched or researched online (if anything)
    // I looked through my past coding files
// Whether you used AI (if yes, explain how)
    // I did not use AI for this code. 
// What you learned from completing this code
    // I learned the value of classes. 