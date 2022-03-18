#include <iostream>

using namespace std;

int damage(string hero, string flower) {
    int value = 0;
    
    if (hero == "Mario") {
        value = 32;
        if (flower == "FireFlower") {
            value = 73;
        } else if (flower == "IceFlower") {
            value = 50;
        }
    } else {
        value = 28;
        if (flower == "FireFlower") {
            value = 70;
        } else if (flower == "IceFlower") {
            value = 45;
        }
    }

    return value * 4;
}

int main() {
    string hero, flower;
    int life;

    cin >> hero >> flower >> life;

    if (damage(hero, flower) >= life) {
        cout << hero << " conseguiu derrotar o Bowser e salvar a princesa Peach.";
    } else {
        cout << "O Bowser conseguiu escapar.";
    }

    return 0;
}