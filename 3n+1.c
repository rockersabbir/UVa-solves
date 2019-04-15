#include<stdio.h>
int main(){
int a,b;
int cnt;
while(scanf("%d%d",&a,&b)!=EOF ){
    int i, tmp;
    int max=-1;
    if(a<b){
        for(i=a;i<=b;i++){
        int n=i;
         cnt=1;
        while(n!=1){
            if(n%2==0){
            n=n/2;
            }
            else
                n=3*n+1;
            cnt++;
        }
        if(max<cnt){
        max=cnt;
        }
    }
    printf("%d %d %d\n",a,b,max);
    }
    else
    {


    for(i=b;i<=a;i++){
        int n=i;
         cnt=1;
        while(n!=1){
        if(n%2==0){
        n=n/2;
        }
        else
            n= 3*n + 1;
        cnt++;
        }
        if(max<cnt){
        max=cnt;
        }
    }
    printf("%d %d %d\n",a,b,max);
    }
}
return 0;
}

