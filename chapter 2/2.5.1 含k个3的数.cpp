#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int m, k, flag = 0;
    stringstream ss;
    cin >> m >> k;
    string t;
    ss << m;
    ss >> t;
    for (int i = 0; i < t.length(); i++)
        if (t[i] == '3') flag++;
    if (flag == k && m % 19 == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}