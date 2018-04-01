#include <iostream>

using namespace std;

int main() {
  int hours, minutes, seconds;

  cout << "Number of seconds: ";
  cin >> seconds;

  hours = seconds / 3600;
  seconds = seconds - (hours * 3600);

  minutes = seconds / 60;
  seconds = seconds - (minutes * 60);

  cout << "Hours: " << hours << endl
       << "Minutes: " << minutes << endl
       << "Seconds: " << seconds << endl;

  return 0;
}
