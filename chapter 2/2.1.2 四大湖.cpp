#include <iostream>  
using namespace std;

int main()
{
    int a, b, c, d;
    bool flag = false;          //设置标志位  
    for (a = 1; a <= 4 && !flag; ++a) //尝试所有的情况  
        for (b = 1; b <= 4 && !flag; ++b)
            if (a == b) continue;  //洞庭湖和洪泽湖的排名不能并列  
            else for (c = 1; c <= 4 && !flag; ++c)
                if (c == a || c == b) continue; //洞庭湖、洪泽湖和潘阳湖的排名不能并列  
                else {
                    d = 10 - a - b - c;   //确定洞庭湖的排名  
                                          //每个人只有一个正确  
                    if (((a == 1) + (b == 4) + (c == 3)) == 1
                        && ((b == 1) + (a == 4) + (c == 2) + (d == 3)) == 1
                        && ((b == 4) + (a == 3)) == 1
                        && ((c == 1) + (d == 4) + (b == 2) + (a == 3)) == 1)
                    {
                        cout << c << endl;
                        cout << a << endl;
                        cout << d << endl;
                        cout << b << endl;
                        flag = true;
                    }
                }
                return 0;
}