// https://youtu.be/H0zi0fdOH9Y
#include <iostream>
#include <cstdint>
using namespace std;
int main(){
      char myChar = 0; // -128 to +127
      short myShort = 0; // -32768 to +32767
      int myInt = 0; // -2^31 to +2^31-1
      long myLong = 0; // -2^31 to +2^31-1
      int8_t myInt8 = 0; // 8 bits
      int16_t myInt16 = 0; // 16 bits
      int32_t myInt32 = 0; // 32 bits
      int64_t myInt64 = 0; // 64 bits
      cout << "Char size in Bytes : " << sizeof(myChar) << endl;
      cout << "Short size in Bytes : " << sizeof(myShort) << endl;
      cout << "Int size in Bytes : " << sizeof(myInt) << endl;
      cout << "Long size in Bytes : " << sizeof(myLong) << endl;
  
      return 0;
} 
