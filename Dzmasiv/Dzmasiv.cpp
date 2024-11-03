#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int numRows, numCols;
    std::cout << "Введите количество строк: ";
    std::cin >> numRows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> numCols;

    int** matrix = new int* [numRows];
    for (int i = 0; i < numRows; ++i) {
        matrix[i] = new int[numCols];
    }

    int startValue;
    std::cout << "Введите начальное значение: ";
    std::cin >> startValue;

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (j == 0) {
                matrix[i][j] = startValue;
            }
            else {
                matrix[i][j] = matrix[i][j - 1] * 2;
            }
        }
    }

    std::cout << "Созданная матрица:\n";
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < numRows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

//----------------------------------------------------------------------

#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int rowCount, columnCount;
    std::cout << "Введите количество строк: ";
    std::cin >> rowCount;
    std::cout << "Введите количество столбцов: ";
    std::cin >> columnCount;

    int** grid = new int* [rowCount];
    for (int i = 0; i < rowCount; ++i) {
        grid[i] = new int[columnCount];
    }

    int initialValue;
    std::cout << "Введите начальное число: ";
    std::cin >> initialValue;

    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < columnCount; ++j) {
            if (j == 0) {
                grid[i][j] = initialValue;
            }
            else {
                grid[i][j] = grid[i][j - 1] + 1;
            }
        }
    }

    std::cout << "Созданная сетка:\n";
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < columnCount; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rowCount; ++i) {
        delete[] grid[i];
    }
    delete[] grid;

    return 0;
}
