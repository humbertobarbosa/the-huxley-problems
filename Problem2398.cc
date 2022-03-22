#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string date;
    cin >> date;

    cout << date.substr(3, 2) + "/" + date.substr(0, 2) + "/" + date.substr(6, 2) << endl;
    cout << date.substr(6, 2) + "/" + date.substr(3, 2) + "/" + date.substr(0, 2) << endl;
    cout << regex_replace(date, regex("\\/"), "-") << endl;

    return 0;
}