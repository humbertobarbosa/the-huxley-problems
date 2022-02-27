#include <stdio.h>

int main() {
    int n, num, x, counter = 0;
    scanf("%d", &n);

    for (x = 0; x < 20; x++) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        } else if (n == num) {
            counter++;
        }
    }

    printf("%d aparece %d vezes", n, counter);

    return 0;
}