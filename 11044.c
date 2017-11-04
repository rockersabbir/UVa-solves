#include<stdio.h>
int main(){
    int y,x,i,a,b;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        scanf("%d%d",&a,&b);
        y=(a/3)*(b/3);
        printf("%d\n",y);
    }
return 0;
}
