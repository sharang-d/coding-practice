#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int chirps_count;

  cout << "Number of chirps: ";
  cin >> chirps_count;

  cout << "The temperature is: " << (40 + chirps_count) / 4.0 << " degrees." << endl;

  return 0;
}
