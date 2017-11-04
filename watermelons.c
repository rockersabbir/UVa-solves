#include<stdio.h>
#include<stdlib.h>
 int i;
int main(){
     int n;
    int i;
    scanf("%d",&n);
i=1;
while(i<=10000){
    printf("%d ",n);
    if(n==1){
    break;
    }
else if(n%2!=0){
n=3*n+1;
}
else
    n=n/2;
    i++;
}

    return 0;
}

