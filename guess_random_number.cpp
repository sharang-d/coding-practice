#include <iostream>
#include <time.h>
#include <limits>

using namespace std;

int main() {
  int random_number, input;

  // Initialize random seed.
  srand(time(NULL));

  // Generate random number between 1 and 100
  random_number = rand() % 100 + 1;

  do {
    cout << "Guess our number between 1 and 100: ";
    if (!(cin >> input)) {
      cout << "You entered a non-numeric." << endl;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (input != -1) {
      cout << "You entered " << input << endl
           << "Your guess was "
           << (input == random_number ? "correct!" : "wrong") << endl;
    }
  } while (input != random_number);

  return 0;
}
