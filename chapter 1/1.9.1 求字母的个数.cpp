#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int a, e, i, o, u, j;
    a = e = i = o = u = j = 0;
    getline(cin, s);
    while (s[j] != '\0') {
        switch (s[j]) {
        case 'a':
            a++;
            j++;
            break;
        case 'e':
            e++;
            j++;
            break;
        case 'i':
            i++;
            j++;
            break;
        case 'o':
            o++;
            j++;
            break;
        case 'u':
            u++;
            j++;
            break;
        default:
            j++;
        }
    }
    cout << a << ' ';
    cout << e << ' ';
    cout << i << ' ';
    cout << o << ' ';
    cout << u << ' ';
    return 0;
}