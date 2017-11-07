#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a[n][256];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; a[i][j] != '\0'; j++) {
            switch(a[i][j]) {
                case 'A':a[i][j] = 'T';break;
                case 'T':a[i][j] = 'A';break;
                case 'C':a[i][j] = 'G';break;
                case 'G':a[i][j] = 'C';break;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}