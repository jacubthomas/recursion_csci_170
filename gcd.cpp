#include <iostream>

using namespace std;

/**
//You will be calculating the greatest common divisor between 'large' and 'small'.
//This is the biggest integer that divides evenly into both 'large' and 'small'.
//This number will always be 1 or larger, since every number is divisible by 1.

//There is a neat algorithm known as the Euclidean Algorithm which calculates the
//greatest common divisor of two integers >= 1.  It uses the fact that the greatest
//common divisor of x and y, where x > y, is the same as the greatest common divisor
//of y and z, where x % y = z.  You can then repeat this as many times as you need,
//finding y % z = m, to reduce the problem to finding the greatest common divisor of
//z and m.  You repeat until x % y = 0, at which point y is your greatest common
//divisor.

//Calculate the greatest common divisor of 'large' and 'small', and return the
//result.  You may not use while, for, do while, or goto.
*/

int gcd(int large, int small) {
    
    int z = -1;

    // prevents from dividing by 0 and
    if(small != 0) z = large % small;
    
    // base case: if small divides into large evenly, done
    if( z == 0 ) return small;
    else if( small <= 1 ) return 1;
    
    // make smaller with recursive call
    return gcd(small, z);
}

int main(int argc, char* argv[]) {
    int x, y, temp;
    cin >> x >> y;
    if (x < y) {
        temp = x;
        x = y;
        y = temp;
    }
    cout << gcd(x, y) << endl;
    return 0;
}
