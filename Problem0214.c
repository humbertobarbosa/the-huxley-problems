#include <stdio.h>

int main() {
    int size, i, sum = 0, west = 0;
    scanf("%d", &size);
    int sections[size];
    
    for (i = 0; i < size; i++) {
        scanf("%d", &sections[i]);
        sum += sections[i];
    }

    for (i = 0; i < size; i++) {
        west += sections[i];
        if (west == sum / 2) {
            printf("%d", i + 1);
            break;
        }
    }

    return 0;
}