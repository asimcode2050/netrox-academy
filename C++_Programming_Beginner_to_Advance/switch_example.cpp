/*
Switch statement example
https://youtu.be/hECT-Tt2Flo
*/
#include <iostream>
using namespace std;
 int main()
 {  
     int x = 5;
     switch(x)
     {
         case 0 : cout << x << " is 0 ";
         break;
         case 1 : cout << x << " is 1 ";
         break;
         case 5 : cout << x << " is 5 ";
         break;
         default: cout << "Is not in case labels";
         break;

     }
     
   
   return 0;

 }
