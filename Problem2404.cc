#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float salary;
    cin >> salary;

    cout << fixed << setprecision(2);
    cout << salary * 1.25;

    return 0;
}