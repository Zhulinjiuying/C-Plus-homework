#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
void Sort(int N, string s[])
{
    int i = 0;
    while (i<N - 1)
    {
        int j = i + 1;
        while (j<N)
        {
            if (s[i]>s[j])
            {
                string temp;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            j++;
        }
        i++;
    }
}
char recur(string s1, int N, int T)
{
    string s2;
    cin >> s2;
    if (s2[0] == '#') return '#';
    if (s1 == "ROOT") printf("DATA SET %d:\n", T);
    int i = 0;
    while (i<N)
    {
        cout << "|     ";
        i++;
    }
    cout << s1 << endl;
    int j = 0;
    string s[100];
    do
    {
        switch (s2[0])
        {
        case 'f':
        {
            s[j++] = s2;
        }
        break;
        case 'd':
        {
            recur(s2, N + 1, T);
        }
        break;
        case ']':
        {
            Sort(j, s);
            int g = 0;
            while (g<j)
            {
                int i = 0;
                while (i<N)
                {
                    cout << "|     ";
                    i++;
                }
                cout << s[g] << endl;
                g++;
            }
            return ']';
        }
        case '*':
        {
            Sort(j, s);
            int g = 0;
            while (g<j)
            {
                cout << s[g] << endl;
                g++;
            }
            return '*';
        }
        case '#': return '#';
        }
    } while (cin >> s2);
    return '*';
}
int main()
{

    int T = 1;
    while (true)
    {
        if (recur("ROOT", 0, T) == '#') break;
        cout << endl;
        T++;
    }
    return 0;
}