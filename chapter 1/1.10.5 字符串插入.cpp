#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[11], substr[4];
    int n = 0;
    while (cin >> str >> substr) {
        int flag, max = 0;
        char buf_1, buf_2;
        for (int i = 0; str[i] != '\0'; i++) {
            if (max < int(str[i])) {
                max = int(str[i]);
                flag = i + 1;
            }
        }
        for (int i = 0; substr[i] != '\0'; i++) {
            buf_1 = str[flag + i];
            str[flag + i] = substr[i];
            for (int j = i; j < strlen(str) - flag; j++) {
                buf_2 = str[flag + j + 1];
                str[flag + j + 1] = buf_1;
                buf_1 = buf_2;
            }
        }
        for (int i = 0; str[i] != '\0'; i++)
            cout << str[i];
        cout << endl;
    }
    return 0;
}