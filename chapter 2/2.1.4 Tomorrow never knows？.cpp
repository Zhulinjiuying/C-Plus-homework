#include <iostream>
#include <cstdio>
using namespace std;

void print(int y, int m, int d) {
    printf("%d-%02d-%02d\n", y, m, d);
}

int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        if (m == 2)
            if (d == 29) {
                d = 1;
                m = 3;
                print(y, m, d);
                return 0;
            }
            else {
                d++;
                print(y, m, d);
                return 0;
            }
    }
    if (m == 2)
        if (d == 28) {
            d = 1;
            m = 3;
            print(y, m, d);
            return 0;
        }
    if (m == 12)
        if (d == 31) {
            y++;
            m = d = 1;
            print(y, m, d);
            return 0;
        }
    if (d == 31) {
        d = 1;
        m++;
        print(y, m, d);
        return 0;
    }
    if (d == 30)
        if (m == 2 || m == 4 || m == 6 || m == 9 || m == 11) {
            d = 1;
            m++;
            print(y, m, d);
            return 0;
        }
    d++;
    print(y, m, d);
    return 0;
}