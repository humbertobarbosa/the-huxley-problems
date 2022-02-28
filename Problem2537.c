#include <stdio.h>

void verify(int c) {
    if (c == 1234) {
        printf("ACESSO PERMITIDO");
    } else {
        printf("ACESSO NEGADO");
    }
}

int main() {
    int code;
    printf("Digite a senha numerica:\n");
    scanf("%d", &code);

    verify(code);

    return 0;
}