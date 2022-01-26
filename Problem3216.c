#include <stdio.h>

int main() {

    float salary, discount;
    scanf("%f", &salary);

    if (salary <= 1751.81) {
        discount = salary * 0.08;
    } else if (1751.82 <= salary && salary <= 2919.72) {
        discount = salary * 0.09;
    } else if (2919.73 <= salary && salary <= 5839.45) {
        discount = salary * 0.11;
    } else {
        discount = 642.339478;
    }
    
    printf("Desconto do INSS: R$ %f", discount);

    return 0;
}