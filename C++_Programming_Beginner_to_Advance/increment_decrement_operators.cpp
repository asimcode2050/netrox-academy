// https://youtu.be/wOi-1KOPrDk
#include <iostream>
using namespace std;
int main(){
  int x = 10;
  x++; //x = x +1;
  x--; // x = x-1;
  x++ ;// post increment
  ++x; // pre increment
  x--; // post decrement
  --x; // pre decrement
  int a, b;
  a = 5;
  b = a++; //  b = 5 , a= 6
  cout << "B after Post Increment " << b << endl;
  a= 5;
  b = ++a;

  cout << "B after Pre Increment : " << b << endl;

    return 0;
} 
