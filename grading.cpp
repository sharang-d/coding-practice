#include <iostream>
#include <string>

using namespace std;

int getInput(string prompt) {
  int input;

  cout << prompt;
  cin >> input;

  return input;
}

int main() {
  int chirps_count, assignment_score1, assignment_score2, assignment_score3,
      assignment_score4, midterm_score, final_score, section_score;
  float final_grade;

  assignment_score1 = getInput("Enter the score for the first assignment: ");
  assignment_score2 = getInput("Enter the score for the second assignment: ");
  assignment_score3 = getInput("Enter the score for the third assignment: ");
  assignment_score4 = getInput("Enter the score for the fourth assignment: ");
  midterm_score = getInput("Enter the score for the midterm: ");
  final_score = getInput("Enter the score for the final: ");
  section_score = getInput("Enter the score for the section grade: ");

  final_grade =
      ((((assignment_score1 + assignment_score2 + assignment_score3 +
          assignment_score4) /
         4) *
        0.4) +
       (midterm_score * 0.15) + (final_score * 0.35) + (section_score * 0.1));

  cout << "The final grade is: " << final_grade << endl;
  return 0;
}
