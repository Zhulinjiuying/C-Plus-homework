#include <iostream>
#include <vector>

using namespace std;

void sort(int a[], int n, vector<int> &v);

int main() {
    int n, a[15000];
    vector<int> v;
    int i = 0;
    while (cin >> n) {
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, n, v);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    return 0;
}

void sort(int a[], int n, vector<int> &v) {
    int t = 0;
    for (int i = 1; i < n; i++)   
        for (int j = 0; j < n - i; j++) {
            if (a[j] > a[j + 1]) { 
                t = a[j];     
                a[j] = a[j + 1];     
                a[j + 1] = t; 
            }
        }
    if (n % 2 == 1) {
        int mid = n / 2;
        v.push_back(a[mid]);
    }
    else {
        int mid = (n - 1) / 2;
        v.push_back((a[mid] + a[mid + 1]) / 2);
    }
}