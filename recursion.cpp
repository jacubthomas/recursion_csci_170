#include <iostream>

using namespace std;

//change this function so that it calculates n! recursively, rather than iteratively.
//you may not use while, for, do while, or goto.

int nfactorial(int n) {
    int ans = 1;
    while (n > 1) {
        ans *= n;
        n--;
    }
    return ans;
}

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    cout << nfactorial(n) << endl;
    return 0;
}
