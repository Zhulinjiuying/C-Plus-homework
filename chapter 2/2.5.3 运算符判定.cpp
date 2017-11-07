#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b, c;
    bool flag = false;
    scanf("%d,%d,%d", &a, &b, &c);
    if (a + b == c) {
        cout << '+' << endl;
        flag = true;
    }
    else if (a - b == c) {
        cout << '-' << endl;
        flag = true;
    }
    else if (a * b == c) {
        cout << '*' << endl;
        flag = true;
    }
    else if (a / b == c) {
        cout << '/' << endl;
        flag = true;
    }
    else if (a % b == c) {
        cout << '%' << endl;
        flag = true;
    }
    if (flag == false) cout << "error" << endl;
    return 0;
}