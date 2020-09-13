#include <iostream>

using namespace std;

//change this function so that it calculates n! recursively, rather than iteratively.
//you may not use while, for, do while, or goto.

int nfactorial(int n) {

    // base case : if n = 0 && if n = 1, we're done
    if( n == 0 || n == 1) return 1;
    
    // recursive call through n -> n-1 -> 1
    return n * nfactorial(n-1);
}

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    cout << nfactorial(n) << endl;
    return 0;
}
