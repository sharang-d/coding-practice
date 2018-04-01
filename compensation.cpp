#include <iostream>
#include <limits>

#define SHOE_PRICE 225

using namespace std;

int getInput() {
  int weeklySales;

  cout << "Enter your estimated weekly sales: ";
  if (!(cin >> weeklySales)) {
    cout << "You entered a non-numeric." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return 0;
  } else {
    return weeklySales;
  }
}

void calcMethod1(int weeklySales) { cout << "Method 1: $600" << endl; }

void calcMethod2(int weeklySales) {
  double weeklyPay;
  int workingHours = 40, payPerHour = 7;
  float multiplierPerSale = 0.1;

  weeklyPay = ((weeklySales * SHOE_PRICE) * multiplierPerSale) +
              (workingHours * payPerHour);
  cout << "Method 2: $" << weeklyPay << endl;
}

void calcMethod3(int weeklySales) {
  double weeklyPay;
  int payPerSale = 20;
  float multiplierPerSale = 0.5;

  weeklyPay = ((weeklySales * SHOE_PRICE) * multiplierPerSale) +
              (weeklySales * payPerSale);
  cout << "Method 3: $" << weeklyPay << endl;
}

int main() {
  int weeklySales = getInput();
  if (weeklySales == 0)
    return 0;

  calcMethod1(weeklySales);
  calcMethod2(weeklySales);
  calcMethod3(weeklySales);

  return 0;
}
