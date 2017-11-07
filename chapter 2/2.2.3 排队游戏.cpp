#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int opt(char str[], int s) {
    if (str[s] == '\0') {
        return -1;
    }
    else {
        if (str[s] == str[0]) {
            int n;
            n = opt(str, s + 1);
            cout << s << ' ' << n << endl;
            return opt(str, n + 1);
        }
        else {
            return s;
        }
    }
}

int main() {
    char a[100];
    cin >> a;
    opt(a, 0);
    return 0;
}