#include <iostream>
using namespace std;

int main() {
    int n, m, sum = 0;
    cin >> n;
    char  a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cin >> m;
    for (int k = 1; k < m; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '@') {
                    if (i - 1 >= 0)
                        if (a[i - 1][j] == '.') a[i - 1][j] = '$';
                    if (j - 1 >= 0)
                        if (a[i][j - 1] == '.') a[i][j - 1] = '$'; 
                    if (i + 1 < n)
                        if (a[i + 1][j] == '.') a[i + 1][j] = '$';
                    if (j + 1 < n)
                        if (a[i][j + 1] == '.') a[i][j + 1] = '$';
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                if (a[i][j] == '$') a[i][j] = '@'; 
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == '@') sum++;
    cout << sum << endl;
    return 0;
}