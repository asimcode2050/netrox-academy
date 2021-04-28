// https://youtu.be/jSW-Ak-TCu4
#include <iostream>
using namespace std;
int main(){
    int myArray[3];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    int myArray2[3] = {4,5,6};
    int myArray3[] =  {7,8,9};
    int x  = myArray3[0];

    cout << "X: " << x <<endl;
    cout << "Error: "<< myArray3[3] << endl;
     int length = sizeof(myArray3) / sizeof(int);
     cout << "Length : " << length << endl;

    return 0;
} 
