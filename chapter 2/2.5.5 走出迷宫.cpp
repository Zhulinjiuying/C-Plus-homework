#include <iostream>
using namespace std;

int main() {
    int x, y, sum = 0;
    int n, m;
    cin >> x >> y;
    char  a[101][101];
    int b[101][101];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') {
                b[i][j] = sum;
            }
            else if (a[i][j] == 'T') {
                n = i;
                m = j;
                b[i][j] = -1;
            }
            else if (a[i][j] == '#') {
                b[i][j] = -2;
            }
            else if (a[i][j] == '.') {
                b[i][j] = -3;
            }
        }
    for (int k = 0; k < x * (y - 1); k++) {
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (b[i][j] == sum) {
                    sum++;
                    if (i - 1 >= 0) //标记步数
                        if (b[i - 1][j] == -3) b[i - 1][j] = sum;
                    if (j - 1 >= 0)
                        if (b[i][j - 1] == -3) b[i][j - 1] = sum;
                    if (i + 1 < x)
                        if (b[i + 1][j] == -3) b[i + 1][j] = sum;
                    if (j + 1 < y)
                        if (b[i][j + 1] == -3) b[i][j + 1] = sum;
                    sum--;
                }
            }
        }
        sum++;
    }
    sum = 20000;
    if (n - 1 >= 0) //迷宫出口附近最少的步数
        if (sum > b[n - 1][m] && b[n - 1][m] > 0) sum = b[n - 1][m] + 1;
    if (m - 1 >= 0)
        if (sum > b[n][m - 1] && b[n][m - 1] > 0) sum = b[n][m - 1] + 1;
    if (n + 1 < x)
        if (sum > b[n + 1][m] && b[n + 1][m] > 0) sum = b[n + 1][m] + 1;
    if (m + 1 < y)
        if (sum > b[n][m + 1] && b[n][m + 1] > 0) sum = b[n][m + 1] + 1;
    if (sum == 20000) sum = 0;
    cout << sum << endl;
    return 0;
}