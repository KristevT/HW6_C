int sumDigits(int *num) {
    int sum = 0;
    while (*num/10 > 0) { // Цикл: складывание единиц числа в переменную -> деление числа на 10
        sum += *num % 10;
        *num /= 10;
    }
    sum += *num % 10;
    printf("%d", sum);
}

int main () {
    int number;
    scanf("%d", &number);
    sumDigits(&number);
}