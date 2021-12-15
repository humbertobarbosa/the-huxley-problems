#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float p, h, imc;
    cin >> p >> h;

    imc = p / (h * h);
    std::cout << std::fixed << std::setprecision(2);
    cout << imc;

    if (imc < 18 or imc > 25) {
        cout << "\natencao";
    } else {
        cout << "\nnormal";
    }

}