// https://youtu.be/xs1t_zGvw2s
#include <iostream>
#include <string>
using namespace std;
int main(){
    string h = "Hello";
    string w(" World");
    string result = h + w;
   // cout << result << endl;
    string s = "Hello \
                World ";
    s = "Hello\nWorld";
    cout << s << endl;
    /*
    \n = Newline
    \t = Horizontal Tab
    \v = Vertical Tab
    \b = backspace
    \r = carriage return
    \0 = Null character
    \' = Single quote
    \" = Double quote
    \\ = Back Slash
    \a = Alert Sound
    */
    string escape = "c:\\windows\\System32\\cmd.exe";
    string escape2 = R"(c:\Windows\System32\cmd.exe)";
    cout << escape2 << endl;
    string text = "Hello";
    bool value = (text == "World");
    cout << "Strings are equal ? " << value <<endl;
    size_t i = text.length();
    cout << "Strings Length: " << i <<endl;
    string sub = text.substr(0,2);
    cout << "Sub String : " << sub << endl;
    char c = text[0];
    cout << "Char : " << c << endl;


    return 0;
}
