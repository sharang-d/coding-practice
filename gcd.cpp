#include <iostream>
#include <string>

using namespace std;

int gcd(int number1, int number2) {
  int temp;
  while(number2 != 0) {
    temp = number2;
    number2 = number1 % number2;
    number1 = temp;
  }
  return number1;
}

int gcd_recursive(int number1, int number2) {
  if(number2 == 0) return number1;

  return gcd(number2, number1 % number2);
}

string formatResult(int number1, int number2, int gcd) {
  return "The GCD of " + to_string(number1) + " and " + to_string(number2) +
         " is " + to_string(gcd);
}

int main() {
  int i = 12, j = 18, k = -4, l = 14;

  cout << formatResult(i, j, gcd(i, j)) << endl
       << formatResult(k, l, gcd(k, l)) << endl;

  cout << formatResult(i, j, gcd_recursive(i, j)) << endl
       << formatResult(k, l, gcd_recursive(k, l)) << endl;

  return 0;
}
