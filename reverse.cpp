#include <iostream>
#include <string>

using namespace std;

string reverse(string str){
    // base case 1: if string is 0/1 char, do nothing
    if( str.length() <= 1 ) return str;
    
    // base case 2: if string is 2 chars, swap & return
    else if( str.length() == 2) {
        swap(str[0], str[1]);
        return str;
    }
    
    // make the problem smaller
    string sub_str = str.substr(1);
    
    // widdle the string through R.C.s down to base case 2, then concatenate the char prior to substring start onto the end of the returned string
    return reverse( sub_str ) + str[0];
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    cout << reverse(str) << endl;
    return 0;
}
