#include <stdio.h>

void quantidade(int s, int m, int y, int p) {
    s -= p * 4;
    m -= p * 5;
    y -= p * 3;

    if (s < 0 && m < 0 && y < 0) {
        printf("\nPartiu Festa do Japa...Japacama");
    } else if (s < 0 && m < 0) {
        printf("\nFaltaram %d saques e %d manjus", -s, -m);
    } else if (s < 0 && y < 0) {
        printf("\nFaltaram %d saques e %d yakitoris", -s, -y);
    } else if (m < 0 && y < 0) {
        printf("\nFaltaram %d manjus e %d yakitoris", -m, -y);
    } else if (s < 0) {
        printf("\nFaltaram %d saques", -s);
    } else if (m < 0) {
        printf("\nFaltaram %d manjus", -m);
    } else if (y < 0) {
        printf("\nFaltaram %d yakitoris", -y);
    } else {
        printf("\nPartiu Festa do Japa!");
    }
}

int main() {
    int saques, manjus, yakutoris, pessoas;
    scanf("%d %d %d %d", &saques, &manjus, &yakutoris, &pessoas);
    saques *= 15;

    quantidade(saques, manjus, yakutoris, pessoas);

    return 0;
}