#include <iostream>
#include <iomanip>

using namespace std;

float calculateValues(int p, int c, int b) {
    float value = 0;

    if (c == 1) {
        value += 600;
        if (b == 3) {
            value += 300;
        }
        value += p * 75;
    } else {
        value += 950;
        if (b == 4) {
            value += 170;
        }
        value += p * 60;
    }   

    cout << "Valor total da viagem: R$ " << value;
    cout << "\nValor por pessoa: R$ " << value / p;

    return value;
}

int main() {
    int people, city, bedrooms;

    cout << "Digite a quantidade de pessoas:\n";
    cout << "Selecione a cidade escolhida: (1 - Pipa e 2 - Fortaleza)\n";
    cout << "Digite a quantidade de quartos:\n";

    cin >> people >> city >> bedrooms;

    std::cout << std::fixed << std::setprecision(2);

    calculateValues(people, city, bedrooms);

    return 0;
}
