#include <iostream>

using namespace std;

int main() {
  int totalAnimals = 100, totalCost = 100;

  for (int horses = 0; horses <= 100; horses++) {
    for (int pigs = 0; pigs <= 100; pigs++) {
      for (int rabbits = 0; rabbits <= 100; rabbits++) {
        if (((horses + pigs + rabbits) == totalAnimals) &&
            ((10 * horses + 3 * pigs + 0.5 * rabbits) == totalCost)) {
          cout << "Horses: " << horses << endl
               << "Pigs: " << pigs << endl
               << "Rabbits: " << rabbits << endl;
          break;
        }
      }
    }
  }

  return 0;
}
