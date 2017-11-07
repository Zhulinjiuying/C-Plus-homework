#include <iostream>
using namespace std;

int main() {
    int year, leap = 0;
    cin >> year ;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        leap = 1;
    if (leap) cout << 'Y' << endl;
    else cout << 'N' << endl;
    return 0;
}