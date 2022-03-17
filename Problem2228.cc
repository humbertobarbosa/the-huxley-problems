#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int impulse, distance, weight;
    float height, jump;
    string yoshi;

    cin >> impulse >> height >> distance >> weight >> yoshi;

    if (yoshi == "Sim") {
        weight += 50;
        impulse += 5;
    }

    jump = pow(impulse, 3) / (sqrt(height) + distance / 2 + weight / 3);

    if (jump >= 100) {
        cout << "Voce consegue";
    } else {
        cout << "Isso e perda de tempo";
    }

    return 0;
}