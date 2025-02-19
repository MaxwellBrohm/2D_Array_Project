// Maxwell Brohm
// Question 6
// 2/17/2025
// Extra: Averages the 3 classes in total at the end

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numStudents;
    cout << "Enter number of students (1-10): ";
    cin >> numStudents;

    if (numStudents < 1 || numStudents > 10) {
        cout << "Invalid input!";
        return 1;
    }

    int scores[10][3];
    srand(time(0));

    cout << "Scores:\nMath English Science\n";
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < 3; j++) {
            scores[i][j] = rand() % 51 + 50;
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }

    string subjects[3] = {"Math", "English", "Science"};
    int totalSum = 0;
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < numStudents; i++) {
            sum += scores[i][j];
        }
        totalSum += sum;
        cout << "Average score for " << subjects[j] << ": " << (double)sum / numStudents << endl;
    }
    
    double overallAvg = (double)totalSum / (numStudents * 3);
    cout << "Overall class average: " << overallAvg << endl;
    
    return 0;
}

