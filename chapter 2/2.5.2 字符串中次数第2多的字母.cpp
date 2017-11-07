#include <string>
#include <cstring>
#include <iostream>>
using namespace std;

struct opt
{
    int count = 0;
    int x = 32;
}fir, sec;

int main() {
    string a;
    int b[26] = { 0 };
    getline(cin, a);
    for (int i = 0; i < a.length(); i++)
        a[i] = tolower(a[i]);
    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 97 && a[i] <= 122)
            b[a[i] - 97] = b[a[i] - 97] + 1;
    }
        for (int j = 0; j < 26; j++) {
            if (b[j] > fir.count) {
                sec = fir;
                fir.count = b[j];
            }
            if (b[j] > sec.count && b[j] < fir.count) 
                sec.count = b[j];
        }
    bool f = false;
    for (int i = 0; i < a.length(); i++)
        if (b[a[i] - 97] == sec.count && f == false) {
            f = true;
            sec.x = a[i];
        }
    char c = char(sec.x);
    char d = c - 32;
    cout << d << '+' << c << ':' << sec.count << endl;
    return 0;
}