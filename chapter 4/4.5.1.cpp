#include <iostream>
#include <cstring>
using namespace std;

int n, k, tot;
char a[8][8];
int b[8][8];

bool check(int x, int y)
{
    for (int i = 0; i < n; i++) {
        if (b[x][i]) return false;
        if (b[i][y]) return false;
    }
    return true;
}

void dfs(int x, int y, int t)
{
    if (x < n && a[x][y] != '.' && check(x, y)) {
        if (t - 1 == 0) {
            tot++;
        }
        else {
            b[x][y] = 1;
            if (x != n - 1) dfs(x + 1, 0, t - 1);
            b[x][y] = 0;
        }
    }
    if (!y) {
        for (int i = 1; i < n; i++)
            dfs(x, i, t);
        if (x + t < n && t != k)
            dfs(x + 1, 0, t);
    }
}

int main()
{
    memset(b, 0, sizeof(a));
    while (1) {
        cin >> n >> k;
        if (-1 == n && -1 == k) break;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        tot = 0;
        for (int i = 0; i <= n - k; i++)
            dfs(i, 0, k);
        cout << tot << endl;
    }
    return 0;
}