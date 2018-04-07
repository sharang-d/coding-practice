/*
This is a number analogy to a famous card trick. Ask the user to enter a three-digit number.
Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the
remainders of the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these
remainders X, Y, Z. Add them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease
it by 11 (whichever operation results in a positive number less than 20; note if the sum is 9, just
report this and stop the process). Finally, divide each of the sums in half. The resulting digits
are A, B, C. Write a program that implements this algorithm.
*/

#include <iostream>

using namespace std;

bool is_odd(int number) {
  return number % 2 == 1;
}

int make_odd(int number) {
  return number >= 12 ? number - 11 : number + 11;
}

int main() {
  int number, a, b, c, x, y, z;

  cout << "Enter a three digit number: ";
  cin >> number;

  c = number % 10;
  number /= 10;
  b = number % 10;
  number /= 10;
  a = number % 10;

  x = ((a*100 + b*10 + c) % 11) + ((b*100 + c*10 + a) % 11);
  y = ((b*100 + c*10 + a) % 11) + ((c*100 + a*10 + b) % 11);
  z = ((c*100 + a*10 + b) % 11) + ((a*100 + b*10 + c) % 11);

  if(x == 9 || y == 9 || z == 9) {
    cout << "One of the sums is 9. Exiting.";
  } else {
    if(is_odd(x))
      x = make_odd(x);

    if(is_odd(y))
      y = make_odd(y);

    if(is_odd(z))
      z = make_odd(z);

    cout << x/2;
    cout << y/2;
    cout << z/2 << endl;
  }

  return 0;
}
