#include <iostream>
#include <string>

using namespace std;

//The Collatz Conjecture states that if you start with a
//positive integer n, you will eventually reach 1 by
//following this algorithm: if n is odd, multiply it by
//3 and add 1.  If n is even, divide it by 2.

//Write a recursive function that calculates the number
//of steps required to reduce n down to 1.  If n=1, it
//should take 0 steps.

//You may not use for, while, do while, or goto.

int collatz(int n) {
    
}

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    cout << collatz(n) << endl;
    return 0;
}
