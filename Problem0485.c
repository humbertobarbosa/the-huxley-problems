#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upper(char name[15]) {
    int i;
    for (i = 0; i < strlen(name); i++) {
        name[i] = toupper(name[i]);
    }
    printf("%s\n", name);
}

int main() {
    char name[15], option[10], name_h[15], name_l[15];
    float height, higher = 0, lower = 2;

    do {
        scanf("%s %f %s", name, &height, option);

        if (height < lower) {
            lower = height;
            strcpy(name_h, name);
        }
        
        if (height > higher) {
            higher = height;
            strcpy(name_l, name);
        }
    } while (strcasecmp(option, "fim") != 0);

    upper(name_h);
    upper(name_l);

    return 0;
}