/*
C++ program to prints the sum, product, difference, and quotient of the two numbers in Hindu/Urdu
YouTube Channel : Netrox Academy
https://youtu.be/vqQ-tUYgh14
*/
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    int number1, number2;
    cout << "Please enter two integers: ";
    cin >> number1 >> number2;
    cout << "The sum is : " << number1 + number2
        << "\n The product is :  " << number1 * number2
        << "\n The difference is : " << number1 - number2
        << "\n The quotient is : " << number1 / number2 << endl;
    return 0;
}
