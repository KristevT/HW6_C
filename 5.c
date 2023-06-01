#include <stdio.h>

int ispolnitel(int num) {
    int newnum[2];
    newnum[0] = (num / 100) * (num/10 - (num/100)*10); // Произведение первой и второй цифры
    newnum[1] = (num/10 - (num/100)*10) * (num % 10);  // Произведение второй и третьей цифры

    if (newnum[0] >= newnum[1]) {
        printf("%d%d", newnum[0], newnum[1]);
    } else {
        printf("%d%d", newnum[1], newnum[0]);          // Вывод в порядке убывания
    }
}

int main () {
    int number;
    scanf("%d", &number);
    ispolnitel(number);
}