#include <stdio.h>

int main() {
    long long int numbers[100] = {1, 1, 1};
    int size, i;
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        if (i > 2) {
            numbers[i] = numbers[i-2] + numbers[i-3];
        }
        printf("%lld\n", numbers[i]);
    }

    return 0;
}