#include<iostream>
#include<ctime>
#include <cstdlib>

int main() { // функци€ main должна иметь возвращаемый тип int
    setlocale(LC_ALL, "ru");
    const int ROWS = 3;
    const int COLS = 3;

    int arr[ROWS][COLS];

    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 9; // записываем сгенерированное случайное число в €чейку массива
        }
    }
    std::cout << arr[ROWS - 1][COLS - 1] << std::endl; // выводим последний элемент массива

    return 0; // возвращаем 0, чтобы показать корректное завершение программы
}