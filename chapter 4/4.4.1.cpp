#include <stdio.h>
#include <string.h>
#define MAX 512
 
//sequence[n][i]：表示将n分解成单调回文中最左边的数为i的个数
unsigned sequence[MAX][MAX];
 
int main( )
{
       memset( sequence, 0, sizeof(sequence) );
       int i, j;
       for( i=1; i<MAX; i++ )
       {
              sequence[i][i] = 1;
              if( i%2==0 ) //如果i是偶数，则可分解成i/2i/2这种形式
                     sequence[i][i/2] = 1;
       }
      
       sequence[2][1] = 1;
       sequence[3][1] = 1;
       sequence[4][1] = 2;
       sequence[4][2] = 1;
       for( i=5; i<MAX; i++ )
       {
              for( j=1; j<MAX; j++)
              {
                     if( (i-2*j)>=j )
                     {
                            for( int m=j; m<=i-2*j; m++)
                                   sequence[i][j]+=sequence[i-2*j][m];
                     }
                     else  break;
              }
       }
       int n;
       while( 1 )
       {
              scanf( "%d", &n );
              if( n==0 )  break;
              unsigned sum = 0;
              for( i=1; i<=n; i++ )
                     sum += sequence[n][i];
              printf( "%d %u\n", n, sum );
       }
       return 0;
}