#include <stdio.h>

int main() {

    int hours, x_hours = 0, salary = 0;
    char name[20];

    scanf("%d %s", &hours, name);

    if (hours <= 160) {
        salary = hours * 10;
    } else {
        salary = 1600;
        hours -= 160;
        if (hours < 10) {
            salary += hours * 20;
        } else if (hours > 45) {
            salary += hours * 30;
        } else {
            salary += hours * 25;
        }
        x_hours = salary - 1600;
    }

    printf("%s vai receber R$ %d.00. Horas Extras: R$ %d.00", name, salary, x_hours);

}