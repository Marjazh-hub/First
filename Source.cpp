#include<iostream>
#include<ctime>
#include <cstdlib>

int main() {
    setlocale(LC_ALL, "ru");
    const int ROWS = 3;
    const int COLS = 3;

    int arr[ROWS][COLS];

    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 9;
        }
    }
    std::cout << arr[ROWS - 1][COLS - 1] << std::endl;

    return 0;
}
