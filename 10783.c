#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,j;
    int o = 1;
    while( scanf("%d",&n)!=EOF ){
        for(j=0;j<n;j++){
            int a, b;
        int i;
        scanf("%d%d",&a,&b);
        int temp;


        int p = a, q=b;
        if(a%2==0){
            p=a+1;
        }
        if(b%2==0){
            q = b-1;
        }
        if(a>b){
            temp=p;
            p=q;
            q=temp;
        }
        int sum = 0;
        for(i = p; i<=q;i+=2){
            sum = sum + i;
        }
        printf("Case %d: %d\n",o,sum);
        o++;
        }

    }

    return 0;

}
