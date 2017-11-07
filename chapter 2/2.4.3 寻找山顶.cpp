#include <iostream>
using namespace std;

int main() {
    int m, n;
    int a[20][20];
    bool flag = true;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (j - 1 >= 0)
                if (a[i][j - 1] > a[i][j])
                    flag = false;
            if (i - 1 >= 0)
                if (a[i - 1][j] > a[i][j])
                    flag = false;
            if (j + 1 < n)
                if (a[i][j + 1] > a[i][j])
                    flag = false;
            if (i + 1 < m)
                if (a[i + 1][j] > a[i][j])
                    flag = false;
            if (flag == true)
                cout << i << ' ' << j << endl;
            flag = true;
        }
    return 0;
}