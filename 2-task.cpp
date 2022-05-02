#include <iostream>

void reverse(int* array) {
    for (int i = 0; i < 5; i++) {
        int temp = *(array + i);
        *(array + i) = *(array + (9 - i));
        *(array + (9 - i)) = temp;
    }
}

int main() {
    int array[10];
    for (int i = 0; i < 10; i++) {
        std::cout << "Input number: ";
        std::cin >> *(array + i);
    }
    reverse(array);
    for (int i = 0; i < 10; i++) {
        std::cout << *(array + i) << " ";
    }
}

/*
Написать функцию, которая принимает указатель на тип int, 
по которому размещены 10 переменных типа int. Функция ничего 
не возвращает, но по тому же указателю элементы должны лежать в обратном порядке.
*/