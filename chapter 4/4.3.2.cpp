#include <stdio.h>
#include <string.h>
int s[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } };
int r, c, arr[100][100], data[100][100];    //data数组为副本，方便判断last <= data[x][y]

int deal(int x, int y, int last)    //简单说一下思路：在遍历一条路径时，可以确定每个点可以下滑的最大值，这样把这些值保存下来，
{   //下次再遇到这些点，就可以直接加上这个值，然后就可以返回了，并修改退回路径中的值
    int i, max, k, current;
    if (x < 0 || x >= r || y < 0 || y >= c || last <= data[x][y] || arr[x][y] == -1)
        return 10000;   //从10000开始，因为题中h不超过10000
    if (arr[x][y] > 10000)  //已访问过的记录该位置可以下滑的最长距离
        return arr[x][y];
    current = arr[x][y];
    arr[x][y] = -1;
    for (i = 0, max = 0; i < 4; i++) {
        k = deal(x + s[i][0], y + s[i][1], current) + 1;
        if (k > max)
            max = k;
    }
    arr[x][y] = max;    //当前位置为向四周滑去的最长距离
    return max;
}

int main(void)
{
    int i, j, k, max;
    scanf("%d%d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    memcpy(data, arr, sizeof(arr));
    for (i = 0, max = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            k = deal(i, j, 99999);
            if (k > max)
                max = k;
        }
    printf("%d\n", max - 10000);
    return 0;
}