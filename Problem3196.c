#include <stdio.h>

int main() {
    int banknotes[7] = {100, 50, 20, 10, 5, 2, 1}, value, counter, i;
    scanf("%d", &value);

    for (i = 0; i < 7; i++) {
        counter = 0;

        while (banknotes[i] <= value) {
            value -= banknotes[i];
            counter++;
        } 
        
        printf("%d\n", counter);    
    }    

    return 0;
}