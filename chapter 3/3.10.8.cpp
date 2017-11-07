#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int change(int x, int n)
{
    return x & ~(1 << n);
}

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        int n, i, j;
        cin >> n >> i >> j;
        bitset<32> b = n;
        bitset<32> k;
        bool flag_1 = b.test(i);
        bool flag_2 = b.test(j);
        if (flag_1) k.set(i);
        if (!flag_2) k.set(j);
        for (int g = i + 1; g < j; g++)
            k.set(g);
        long f = k.to_ulong();
        cout << hex << f << endl;
        t--;
    }
    return 0;
}