#include<stdio.h>
int main(){
int a=0,b=0,i,n;long long int s,d;
scanf("%d",&n);
for(i=0;i<n;i++){
        scanf("%lli%lli",&s,&d);
        a= (s+d)/2;
        b=  (s-a);
        if (a<0||b<0){
        printf("impossible\n");
        }
        else if ( (a+b)!=(s) && (a-b)!=(d) ){
        printf("impossible\n");
        }
        else if ( (a-b)!=(d) ){
        printf("impossible\n");
        }
        else if(a>b)
        {
            printf("%d %d\n",a,b);
        }
        else if(b>a){
            printf("impossible\n");
            }
        else if(b==a){
            printf("%d %d\n",a,b);
        }
}
return 0;
}
