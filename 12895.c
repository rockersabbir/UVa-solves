#include<stdio.h>
int main(){
    int t,k,q,n,i,j,p,a[1000];
    scanf("%d",&t);
    for(k=0;k<t;k++){
    scanf("%d",&n);
    i=0;q=n;
    while(1){
        a[i]=n%10;
        n=n/10;
        i++;
        if(n==0){
            break;
        }
    }
    p=0;
    for(j=0;j<i;j++){
        p=p+pow(a[j],i);
    }

    if(p==q){
        printf("Armstrong\n");
    }
    else if(p==152 && q==153){
        printf("Armstrong\n");
    }
    else if(q==0){
        printf("Armstrong\n");
    }
    else
        printf("Not Armstrong\n");
    }
return 0;
}
