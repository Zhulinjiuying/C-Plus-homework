#include <iostream>
#include <cstring>
#include <string>
using namespace std;

bool b;
int k;

int opt(char str[], char t[], int s) {
    if (strlen(str) == s)
        return (b = false, s - 1);
    else {
        if (str[s] == '(') {
            int n = 0;
            b = false;
            k++;
            if (strlen(str) - 1 != s)
                (b, n) = opt(str, t, s + 1);
            if (b == false) {
                t[s] = '$';
            }
            else {
                if (n != 0) {
                    if (str[n] == ')') {
                        k--;
                        return opt(str, t, n + 1);
                    }
                    else if (str[n] == '(') {
                        t[s] = '$';
                        return (b = false, n);
                    }
                }
            }
        }
        else if (str[s] == ')') {
            if (k == 0) {
                t[s] = '?';
                return opt(str, t, s + 1);
            }
            return (b = true, s);
        }
        else return opt(str, t, s + 1);
    }
}

int main() {
    char a[101], c[101];
    while (cin >> a) {
        b = false;
        k = 0;
        for (int i = 0; i < strlen(a); i++)
            c[i] = ' ';
        for (int i = 0; i < strlen(a); i++)
            cout << a[i];
        cout << endl;
        opt(a, c, 0);
        for (int i = 0; i < strlen(a); i++)
            cout << c[i];
        cout << endl;
    }
    return 0;
}