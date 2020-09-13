#include <iostream>
#include <string>

using namespace std;

//change this function so that it reverses 'str' recursively, rather than iteratively.
//you will probably want to add a function parameter.
//you may not use while, for, do while, or goto.

string reverse(string str) {
    string ans = str;
    for (unsigned int i = 0; i < str.length()/2; i++) {
        swap(ans[i], ans[str.length()-i-1]);
    }
    return ans;
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    cout << reverse(str) << endl;
    return 0;
}
