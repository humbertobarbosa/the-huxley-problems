#include <stdio.h>

void AnalisarSituacao(float a, float b, float c, float d) {

	float media = (a + b * 2 + c * 3 + d * 4) / 10;

	if (media >= 9) {
		printf("aprovado com louvor");
	} else if (media >= 7) {
		printf("aprovado");
	} else if (media < 3) {
		printf("reprovado");
	} else {
		printf("prova final");
	}

}

int main() {

	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	AnalisarSituacao(a, b, c, d);
    
}
