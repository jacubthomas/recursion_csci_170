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

int collatz(int n, int count) {
    
    if(n < 1){
        cout << "invalid input. n must be >= 1" <<  endl;
        return -1;
    }
    // base case : if 1, then done
    if( n == 1 ) return count;
    
    // collatz step: if odd, else even
    if(n%2==1){
        n*=3; n++;
    } else{
        n/=2;
    }
    // recursive call
    return collatz(n, ++count);
    
}

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    cout << collatz(n,0) << endl;
    return 0;
}
