// Maxwell Brohm
// Question 5 
// 2/17/2025
// Extra: Prints the total sum and average of the entire matrix

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Enter n (1-10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Invalid input!";
        return 1;
    }

    int matrix[10][10];
    srand(time(0));

    cout << "Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 100 + 1;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Row Sums and Averages:\n";
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        cout << "Row " << i << " - Sum: " << sum << ", Avg: " << (double)sum / n << endl;
    }

    cout << "Column Sums and Averages:\n";
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        cout << "Column " << j << " - Sum: " << sum << ", Avg: " << (double)sum / n << endl;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            totalSum += matrix[i][j];
        }
    }
    double totalAvg = (double)totalSum / (n * n);
    cout << "Total Sum: " << totalSum << ", Total Average: " << totalAvg << endl;

    return 0;
}
