#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    std::cout << "Input a, b: ";
    std::cin >> a >> b;
    swap(&a, &b);
    std::cout << a << " " << b;
}

/*
Написать функцию, принимающую два указателя на int и меняет местами содержимое данных указателей.
*/