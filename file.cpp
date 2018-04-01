#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20], add_another;

  cout << endl << "Enter the name of the file: ";
  cin >> file_name;

  // Create an ofstream called out_stream, open the stream for output.
  ofstream out_stream(file_name, ios::out);

  do {
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;

    // Write the output to the stream.
    out_stream << first_name << endl << last_name << endl << age << endl;

    cout << "Enter 'y' or 'Y' to add another record: ";
    cin >> add_another;
  } while (add_another == 'y' || add_another == 'Y');

  out_stream.close();

  // Create an ofstream called in_stream, open the stream for output.
  ifstream in_stream(file_name, ios::in);
  while (in_stream >> first_name >> last_name >> age) {
    cout << endl
         << "First Name: " << first_name << endl
         << "Last Name:  " << last_name << endl
         << "Enter Age:  " << age << endl;
  }
  in_stream.close();

  return 0;
}
