#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, k = 0, sum = 0;
    char a[1000][50];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n;) {
        while (sum + strlen(a[i])<= 80) {
            sum += (strlen(a[i]) + 1);
            i++;
        }
        for (int j = k; j < i; j++) {
            cout << a[j];
            if (j != i - 1)
                cout << ' ';
        }
        cout << endl;
        k = i;
        sum = 0;
    }
    return 0;
}