#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n, i, j, s, la, lb, t, a[10001], b, cnt;
    cin >> n;
    while (n--)
    {
        memset(a, 0, sizeof a);
        cin >> s >> la;
        cnt = 0;
        for (i = 0; i<la; i++) {
            cin >> t;
            a[t]++;
        }
        cin >> lb;
        for (i = 0; i<lb; i++) {
            cin >> b;
            if (b >= s) continue;
            cnt += a[s - b];
        }
        cout << cnt << endl;
    }
}