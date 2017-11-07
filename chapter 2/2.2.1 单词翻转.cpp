#include <iostream>
#include <string>
using namespace std;

int main() {
    int k = 0;
    string a;
    getline(cin, a);
    for (int i = 0; i <= a.length(); i++) {
        if (a[i] == ' ') {
            for (int j = i - 1; j >= k; j--)
                cout << a[j];
            cout << a[i];
            k = i + 1;
        }
        if (i == a.length()) {
            for (int j = i - 1; j >= k; j--)
                cout << a[j];
        }
    }
    return 0;
}