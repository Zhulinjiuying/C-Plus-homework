#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int N,M;
int cost[3500];
int desire[3500];
int d[2][13000];//d[i][j]表示将前i件物品放入容量为j的背包的最大值
int main()
{
    while(scanf("%d %d",&N,&M)!=EOF)
    {
        int i,j;
        for(i=0;i<N;i++)
        {
            scanf("%d %d",&cost[i],&desire[i]);
        }
        for(i=0;i<=M;i++)
        {
            d[0][i]=0;
        }
        int k;
        for(i=1;i<=N;i++)
        {
            k=i%2;
            for(j=0;j<=M;j++)
            {
                if(j-cost[i-1]<0)
                {
                    d[k][j]=d[(k+1)%2][j];
                    continue;
                }
                d[k][j]=d[(k+1)%2][j]>(d[(k+1)%2][j-cost[i-1]]+desire[i-1])?d[(k+1)%2][j]:(d[(k+1)%2][j-cost[i-1]]+desire[i-1]);
            }
        }
        printf("%d\n",d[N%2][M]);
    }
    return 0;
}