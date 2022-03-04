#include <stdio.h>

int main() {
    float width, length, height;

    printf("Digite a largura da bagagem:\n");
    printf("Digite o comprimento da bagagem:\n");
    printf("Digite a altura da bagagem:\n");
    scanf("%f %f %f", &width, &length, &height);

    if (width <= 45 && length <= 56 && height <= 25) {
        printf("BAGAGEM PERMITIDA");
    } else {
        printf("BAGAGEM PROIBIDA");
    }

    return 0;
}