#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;
    switch (month) {
        case 1:
        case 2:
        case 3:
            cout << " Winter";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Spring";
            break;
        case 7:
        case 8:
        case 9:
            cout << "Summer";
            break;
        case 10:
        case 11:
        case 12:
            cout << "Autumn";
            break;
        default:
            cout << "There is no such month";

    }

    return 0;
}
