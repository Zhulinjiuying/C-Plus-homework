#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    
    int word1 = 0;      // word 记录单词长度. 
    int word2 = 0;
    int n;
    
    for(int i = 0; i < 500; i++)
    {
        
        if((s[i] != ' ') && (s[i] != '.'))
            word1++;
        else
        {
            if(word2 < word1)
            {
                word2 = word1;
                n = i;
            }
            word1 = 0;
        }
        if(s[i] == '.')
            break;
    }
    int m = n - word2;
    for(m;  m < n; m++)
        cout << s[m];
    cout << endl;
    return 0;                   
}