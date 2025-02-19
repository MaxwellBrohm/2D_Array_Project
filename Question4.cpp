// Maxwell Brohm
// Question 4
// 2/17/2025
// Extra: Includes min value along with max value

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int rows, columns;
    cout << "Enter rows (1-5): ";
    cin >> rows;
    cout << "Enter columns (1-5): ";
    cin >> columns;

    if (rows < 1 || rows > 5 || columns < 1 || columns > 5) {
        cout << "Invalid input!";
        return 1;
    }

    int matrix[5][5];
    srand(time(0));

    // Initialize and display matrix
    cout << "Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = rand() % 50 + 1;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Find max element
    int maxVal = matrix[0][0], maxRow = 0, maxCol = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    
    int minVal = matrix[0][0], minRow = 0, minCol = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    cout << "Max Value: " << maxVal << " at (" << maxRow << ", " << maxCol << ")\n";
    cout << "Min Value: " << minVal << " at (" << minRow << ", " << minCol << ")\n";
    return 0;
}
