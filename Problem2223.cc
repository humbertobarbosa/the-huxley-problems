#include <iostream>

using namespace std;

int main() {
    string number, arr[] = {
        "Zero","Um", "Dois", "Tres", "Quatro", 
        "Cinco", "Seis", "Sete", "Oito", "Nove"
    };

    cin >> number;
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == number) {
            cout << i;
        }
    }
    
    return 0;
}