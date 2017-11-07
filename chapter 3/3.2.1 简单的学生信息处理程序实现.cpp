#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    int id;
    int gpa[4];
public:
    void init(string n, int a, int i, int g[4]) {
        name = n;
        age = a;
        id = i;
        for (int j = 0; j < 4; j++)
            gpa[j] = g[j];
    }
    int avg(int g[4]) {
        int sum = 0;
        for (int i = 0; i < 4; i++)
            sum += g[i];
        return sum / 4;
    }
    void print() {
        cout << name << ',' << age << ',' << id << ',' << avg(gpa) << endl;
    }
};

int main() {
    Student s;
    string n;
    char c;
    int a, i, g[4];
    getline(cin, n, ',');
    cin >> a >> c >> i >> c >> g[0] >> c >> g[1] >> c >> g[2] >> c >> g[3];
    s.init(n, a, i, g);
    s.print();
    return 0;
}