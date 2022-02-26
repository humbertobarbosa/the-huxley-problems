#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upper(char city[20]) {
    int i;
    for (i = 0; i < strlen(city); i++) {
        city[i] = toupper(city[i]);
    }
    printf("%s\n", city);
}

int main() {
    char city[20], f_city[20];
    int distance, value, further = 0;

    while (1) {
        scanf("%s", city);
        if (strcasecmp(city, "fim") == 0) {
            break;
        } else {
            scanf("%d %d", &distance, &value);
            if (distance > further && value <= 150) {
                further = distance;
                strcpy(f_city, city);
            }
        }
    }

    if (further == 0) {
        printf("SEM DESTINO");
    } else {
        upper(f_city);
    }

    return 0;
}