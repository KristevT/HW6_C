int sumDigits(int *num) {
    int sum = 0;
    while (*num/10 > 0) {
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