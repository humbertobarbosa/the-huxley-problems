#include <stdio.h>
#include <string.h>

void stdpacks(char pack[15], char payment[20], int channels, int option, float price) {
    if (strlen(pack) == 6) {
        channels = 32;
        price = 80.80;
        option = 1;
    } else if (strcasecmp(pack, "entretenimento") == 0) {
        channels = 55;
        price = 100.40;
        option = 1;
    } else if (strcasecmp(pack, "multicultural") == 0) {
        channels = 70;
        price = 130.23;
        option = 2;
    } else if (strcasecmp(pack, "completo") == 0) {
        channels = 112;
        price = 215.50;
        option = 2;
    }

    if (strlen(payment) == 6) {
        if (option == 1) {
            channels += 6;
            price *= 0.95;
        } else {
            channels += 11;
            price *= 0.90;
        }
    }

    printf("%.2f\n%d", price, channels);
}

int main() {
    char pack[15], payment[20];
    int channels, option;
    float price;

    scanf("%s %s", pack, payment);

    stdpacks(pack, payment, channels, option, price);

    return 0;
}
