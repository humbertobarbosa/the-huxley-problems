#include <stdio.h>
#include <string.h>

int main() {
    char option[8];
    int number, counter = 0;

    do {
        scanf("%d %s", &number, option);
        counter += number + 1;
    } while (strcasecmp(option, "sair") != 0);

    printf("%d\n%.2f", counter, counter * 14.00);

    return 0;
}