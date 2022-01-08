/*
C++ Program to Find Largest of Two Numbers
YouTube Channel : Netrox Academy
https://youtu.be/y7UGh57AZ5I
*/
#include <iostream>
using namespace std;

int main(){
 int number1, number2;
 cout << "Please enter two integers:";
 cin >> number1 >> number2;
 if(number1 == number2){
     cout << "These numbers are equal"<<endl;
 }
 if(number1 > number2){
     cout << number1 << " is larger" <<endl;
 }
 if(number2 > number1){
     cout << number2 << " is larger" << endl;
 }

  return 0;
}
