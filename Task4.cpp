#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    cout << ((((number % 10) + (number / 10 % 10) + (number / 100 % 10) + (number / 1000)) >= 10) ? "true" : "false") << endl;

    return 0;
}
