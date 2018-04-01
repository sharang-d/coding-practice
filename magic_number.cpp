#include <iostream>

using namespace std;

int reverseNum(int num) {
  int remainder, reverse = 0;

  while (num > 0) {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num / 10;
  }

  return reverse;
}

int main() {
  int number, reversed, subtracted;

  cout << "Input number: ";
  cin >> number;

  reversed = reverseNum(number);
  cout << "Reverse it: " << reversed << endl;

  subtracted = number - reversed;
  cout << "Subtract: " << number << " - " << reversed << " = " << subtracted
       << endl;

  reversed = reverseNum(subtracted);
  cout << "Reverse it: " << reversed << endl;

  cout << "Add: " << reversed << " + " << subtracted << " = "
       << reversed + subtracted << endl;

  return 0;
}
