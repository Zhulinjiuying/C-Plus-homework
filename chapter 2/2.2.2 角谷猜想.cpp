#include <iostream>
using namespace std;

int gu(int a) {
    if (a == 1) cout << "End" << endl;
    else if (a % 2 == 1) {
        cout << a << "*3+1=" << a * 3 + 1 << endl;
        gu(a * 3 + 1);
    }
    else {
        cout << a << "/2=" << a / 2 << endl;
        gu(a / 2);
    }
    return 1;
}

int main() {
    int a;
    cin >> a;
    gu(a);
    return 0;
}