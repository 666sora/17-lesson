#include <iostream>
#include <string>

bool findStr(char* str, char* subStr) {
    int i = 0;
    bool find = false;
    while (*(str + i) != '\0' && !find) {
        int j = 0;
        if (*(str + i) == *(subStr + j)) {
            find = true;
            while (*(subStr + j) != '\0' && find) {
                if (*(str + i + j) != *(subStr + j)) {
                    find = false;
                }
                j++;
            }
        }
        i++;
    }
    return find;
}

int main() {
    char str[] = "Sample text";
    char subStr[] = "text";
    char anthrSubStr[] = "tect";
    std::cout << findStr(str, subStr) << std::endl;
    std::cout << findStr(str, anthrSubStr);
}

/*
Написать функцию, которая принимаем указатель на char, по которому лежит строка. 
Функция должна возвращать true, если вторая строка является подстрокой первой. 
*/