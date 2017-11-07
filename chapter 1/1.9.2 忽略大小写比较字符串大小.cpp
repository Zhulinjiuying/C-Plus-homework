#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[82], b[82];
    int i = 0;
    cin >> a;
    cin >> b;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
        i++;
    }
    if (strcmp(a, b) == 0) cout << '=';
    else if (strcmp(a, b) > 0) cout << '>';
    else cout << '<';
    return 0;
}