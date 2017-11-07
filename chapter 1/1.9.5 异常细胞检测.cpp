#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[100][100], n, num = 0;
    cin >> n;
    if (n < 2 || n > 100) return -1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 1; i < n - 1; i++)
        for (int j = 1; j < n - 1; j++)
            if (abs(a[i][j] - a[i][j - 1]) >= 50 && abs(a[i][j] - a[i - 1][j]) >= 50)
                if (abs(a[i][j] - a[i][j + 1]) >= 50 && abs(a[i][j] - a[i + 1][j]) >= 50)
                            num++;
    cout << num << endl;
    return 0;
}