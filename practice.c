#include<stdio.h>
int main(){



    int n,result;

    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);
    return 0;

    }

    int fact(int m)
    {
        if(m==0) {return 1;}
        return m*fact(m-1);
    }



