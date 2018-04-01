#include <iostream>
#include <string>

using namespace std;

int main() {
  string helloStr = "Hello World!";


  for (int line = 1; line < 7; line++) {
    for (int i = 0; i < 4; i++) {
      cout.width(17);
      cout << std::left << helloStr;
    }
    cout << endl;
  }

  return 0;
}
