#include <iostream>

using namespace std;

int main() {
    int length, distance, price, value, total;
    cin >> length >> distance >> price >> value;
    
    total = price * length;
    total += (int) (length / distance) * value;
    cout << total;

    return 0;
}