#include <stdio.h>

int main () {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d); // Ввод

    for (int i = a; i <= b; i++) { // Цикл с проверкой
        i % d == c ? printf("%d ", i) : printf(""); // Вывод при соответствии требованиям
    }
}