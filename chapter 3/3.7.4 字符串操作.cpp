#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <cstdlib>
#include <vector>
using namespace std;

int find(string * p);
int rfind(string * p);
string add(string * p);
string copy(string *p);

bool isNum(string & a)
{
    bool t = true;
    int n;
    for (int i = 0; i < a.length(); i++) {
        if (isdigit(a[i])) continue;
        else {
            t = false;
            break;
        }
    }
    if (t) {
        n = atoi(a.c_str());
        if (n > 99999) t = false;
    }
    return t;
}

int tranNum(string * p, string & a)
{
    int n = 0;
    bool t = isNum(a);
    if (t) n = atoi(a.c_str());
    else if ("find" == a) n = find(p);
    else if ("rfind" == a) n = rfind(p);
    return n;
}

string add(string * p)
{
    string S1, S2, k;
    cin >> S1;
    if ("add" == S1) S1 = add(p);
    else if ("copy" == S1) S1 = copy(p);
    bool t1 = isNum(S1);
    cin >> S2;
    if ("add" == S2) S2 = add(p);
    else if ("copy" == S2) S2 = copy(p);
    bool t2 = isNum(S2);
    if (t1 && t2) {
        stringstream ss;
        int s1 = tranNum(p, S1);
        int s2 = tranNum(p, S2);
        s1 += s2;
        ss << s1;
        ss >> k;
        return k;
    }
    k = S1 + S2;
    return k;
}

string copy(string *p)
{
    string N, X, L;
    cin >> N;
    int n, x, l;
    n = tranNum(p, N);
    cin >> X;
    x = tranNum(p, X);
    cin >> L;
    l = tranNum(p, L);
    string a = p[n].substr(x, l);
    return a;
}

int find(string * p)
{
    string S, N;
    int n, sum;
    cin >> S;
    if ("copy" == S) S = copy(p);
    else if ("add" == S) S = add(p);
    cin >> N;
    if ("find" == N) {
        n = find(p);
        sum = p[n].find(S);
        if (-1 == sum) return p[n].length();
        else return sum;
    }
    else if ("rfind" == N) {
        n = rfind(p);
        sum = p[n].rfind(S);
        if (-1 == sum) return p[n].length();
        else return sum;
    }
    else n = tranNum(p, N);
    sum = p[n].find(S);
    if (-1 == sum) return p[n].length();
    else return sum;
}

int rfind(string * p)
{
    string S, N;
    int n, sum;
    cin >> S;
    if ("copy" == S) S = copy(p);
    else if ("add" == S) S = add(p);
    cin >> N;
    if ("find" == N) {
        n = find(p);
        sum = p[n].find(S);
        if (-1 == sum) return p[n].length();
        else return sum;
    }
    else if ("rfind" == N) {
        n = rfind(p);
        sum = p[n].rfind(S);
        if (-1 == sum) return p[n].length();
        else return sum;
    }
    else n = tranNum(p, N);
    sum = p[n].rfind(S);
    if (-1 == sum) return p[n].length();
    else return sum;
}

void insert(string *p)
{
    string S, N, X;
    cin >> S;
    int n = 0, x = 0;
    if ("copy" == S) S = copy(p);
    else if ("add" == S) S = add(p);
    cin >> N;
    n = tranNum(p, N);
    cin >> X;
    x = tranNum(p, X);
    p[n].insert(x, S);
}

void reset(string *p)
{
    string S, N;
    cin >> S;
    if ("copy" == S) S = copy(p);
    else if ("add" == S) S = add(p);
    cin >> N;
    int n = tranNum(p, N);
    p[n] = S;
}

void print(string * p, vector<string> & s)
{
    int i;
    cin >> i;
    s.push_back(p[i]);
}

void printall(string * p, int n, vector<string> & s)
{
    for (int i = 1; i < n + 1; i++)
        s.push_back(p[i]);
}

int main() {
    string * p, a;
    vector<string> s;
    int n;
    cin >> n;
    p = new string[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> p[i];
    while (1) {
        cin >> a;
        if ("copy" == a) copy(p);
        else if ("add" == a) add(p);
        else if ("find" == a) find(p);
        else if ("rfind" == a) rfind(p);
        else if ("insert" == a) insert(p);
        else if ("reset" == a) reset(p);
        else if ("print" == a) print(p, s);
        else if ("printall" == a) printall(p, n, s);
        else if ("over" == a) break;
    }
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << endl;
    return 0;
}