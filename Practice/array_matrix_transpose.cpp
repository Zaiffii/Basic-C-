//Transpose
//array[row][column]=array[column][row] THAT SIMPLE
#include <iostream>
using namespace std;

const int SIZE = 10;

void transposeMatrix(int matrix[SIZE][SIZE], int transpose[SIZE][SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE], transpose[SIZE][SIZE];
    int rows, cols;

    // Input matrix dimensions
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the transpose
    transposeMatrix(matrix, transpose, rows, cols);

    // Display the original matrix
    cout << "\nOriginal Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Display the transpose matrix
    cout << "\nTranspose Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
