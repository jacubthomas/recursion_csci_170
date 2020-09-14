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
    
    // base case: if string len is 1, then done
    if(len == 1) return true;
    
    // if the ends match, chop and continue
    if(str[0] == str[len-1]){
        // make the problem smaller
        string sub_str = str.substr(1, len-2);
        return pal(sub_str, sub_str.length());
    }
    // mismatch deteced
    return false;
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    int n = str.length();
    cout << pal(str, n) << endl;
    return 0;
}
