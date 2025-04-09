/*
 Objective: Create a C++ program that functions as a simple calculator. The program should be able to perform addition, subtraction, multiplication, and division on two numbers input by the user. Use Chapter 4 methods and submit in a word document by October 28, 2024.

 Instructions:

 Function Definition:
 Define four separate functions for each of the following operations:
 Addition
 Subtraction
 Multiplication
 Division
 Each function should take two double parameters and return the result.
 Input Handling:
 In the main function, prompt the user to enter two numbers.
 Use appropriate input validation to ensure the user enters valid numbers.
 Error Handling:
 In the division function, handle the case where the second number is zero. Print an error message instead of attempting to divide by zero.
 Output:
 After receiving the input, call each arithmetic function and display the results in a clear format.
 Code Organization:
 Organize your code with appropriate comments explaining each section.
 Follow good coding practices, including proper indentation and naming conventions.

 SAMPLE RUN:
 Enter the first number: 5
 Enter the second number: 6

 Addition: 11
 Subtraction: -1
 Multiplication: 30
 Division: 0.833333

 ****All 4 functions will output once you input 5 for first number and 6 for second number.**
 */
#include <iostream>
#include <algorithm>
using namespace std;

// define functions
int addem(int x, int y);
int subem(int x, int y);
int multiem(int x, int y);
double dividem(double x, double y);

// main functions
int main (){
    int one;
    cout << "Enter the first number" << endl;
    cin >> one;
    int two;
    cout << "Enter the second number" << endl;
    cin >> two;

//call and perform functions
    cout << "Addition: " << addem(one, two) << endl;
    cout << "Subtraction: " << subem(one, two) << endl;
    cout << "Multiplication: " << multiem(one, two) << endl;

// check if inputs are zero, if so send error message.
    
    if(two != 0 && one != 0){
        cout << "Division: " << dividem(one, two) << endl;
    }else{
        cout << "Division Error. 0 cannot be used as input" << endl;
    }
    return 0;
}

//functions to perform simple calculations
int addem(int x, int y){
    return x + y;
}
int subem(int x, int y){
    return x - y;
}
int multiem(int x, int y){
    return x * y;
}
double dividem(double x, double y){
    return x/y;
}
