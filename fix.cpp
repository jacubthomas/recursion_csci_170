#include <iostream>

using namespace std;

//Barry Bruin is learning about recursion, and attempted to write a
//program that recursively determines whether a provided integer's
//digits are in non-decreasing order (that is, they are in increasing
//order, but not necessarily strictly increasing order).  As is, the
//program currently always outputs false, asserting that the digits
//are not in non-decreasing order.  Run the program with several
//different inputs to verify this

//Your job is to fix the code so that it gives the correct output for
//all possible inputs.  Only make changes where the code indicates
//that they should be made: you should not change the main function,
//nor the start of the helper function.  You may not use for, while,
//do while, or goto.

bool increasing(int a)
{
    if (a > 0) {

        //if the recursive call fails, don't bother to check further.
        if (!increasing (a/10)) return false;

        //the least significant digit
        int last = a % 10;

        //the second least significant digit, 0 if a < 10
        int prev = (a / 10) % 10;

        //make your changes only below this line.

        if (prev <= last) return true;

        return false;
    }

    return false;
}

//do not change the main function.
int main (int argc, char* argv[])
{
  int x;
  cin >> x;
  cout << increasing(x) << endl;
  return 0;
}
