#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, y, a[100][100];
    vector<int> b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                cin >> a[j][k];
        int sum = 0;
        for (int i = 0; i < y; i++) {
            sum += a[0][i];
            if (x > 1)
                sum += a[x - 1][i];
        }
        for (int i = 1; i < x - 1; i++) {
            sum += a[i][0];
            if (y > 1)
                sum += a[i][y - 1];
        }
        b.push_back(sum);
    }

    for (int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
    return 0;
}