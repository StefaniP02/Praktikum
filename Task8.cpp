#include <iostream>
using namespace std;

int main() {

    int day, month;
    cin >> day >> month;
    int daysTillEndOfTheYear = 0;
    switch (month + 1)
    {
        case 2: daysTillEndOfTheYear += 29;
        case 3: daysTillEndOfTheYear += 31;
        case 4: daysTillEndOfTheYear += 30;
        case 5: daysTillEndOfTheYear += 31;
        case 6: daysTillEndOfTheYear += 30;
        case 7: daysTillEndOfTheYear += 31;
        case 8: daysTillEndOfTheYear += 31;
        case 9: daysTillEndOfTheYear += 30;
        case 10: daysTillEndOfTheYear += 31;
        case 11: daysTillEndOfTheYear += 30;
        case 12: daysTillEndOfTheYear += 31;
    }
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: daysTillEndOfTheYear += (31 - day); break;
        case 2:  daysTillEndOfTheYear += (29 - day); break;
        case 4:
        case 6:
        case 9:
        case 11: daysTillEndOfTheYear += (30 - day); break;
    }
    cout << daysTillEndOfTheYear << endl;

    return 0;
}
