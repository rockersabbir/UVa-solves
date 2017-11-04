#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAX 2000005

int a[MAX];
int main()
{
    int b,c,d,e,t,i,j;
    while(scanf("%d",&t)!=EOF)
    {
        //sort(a,a+t);
       memset(a, 0, sizeof a);
        for( i=1;i<=t;i++)
        {
            scanf("%d",&b);
                a[b]++;
        }

            for( i=1;i<=MAX;i++)
            {
                for( j=1;j<=a[i];j++)
                {
                    printf("%d",i);
                    if(i<MAX) printf(" ");
                }
            }
            printf("\n");

        }

    return 0;
}
