#include <iostream>
#include <string>

using namespace std;

//A palindrome is a string that reads the same front-to-back as
//back-to-front.  So, the first character must be the same as
//the last character, and the second character must be the same
//as the second-to-last character, etc.

//Your function should return true if the input string is a
//palindrome, and false otherwise.  You will probably want to add
//a function parameter.  You may not use for, while, do while, or
//goto.

bool pal(string str, int len) {

}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    int n = str.length();
    cout << pal(str, n) << endl;
    return 0;
}
