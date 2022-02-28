#include <stdio.h>

int input() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int days, distance;

    printf("Digite a quantidade de dias de locacao:");
    days = input();

    printf("Digite a quantidade de km rodados:");
    distance = input();

    if (days <= 0 || distance <= 0) {
        printf("Valor invalido");
    } else if (distance <= days * 100) {
        printf("Valor total a ser pago em reais: %d", days * 90);
    } else {
        int value = days * 90;
        distance -= days * 100;
        printf("Valor total a ser pago em reais: %d", value + distance * 12);
    }
}