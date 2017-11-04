#include<stdio.h>
#include<math.h>
int main(){
    int i ,j,k,a,b,c,d,e,f,q;
    scanf("%d",&f);
    q=f-1;
    while(f--) {
     scanf("%d",&k);
    scanf("%d",&c);
if(q!=f) printf("\n");
for(d=1;d<=c;d++){
   for(i=1;i<=k;i++){
        for(j=1;j<=i;j++ ){
            printf("%d",i);
        }printf("\n");
    }
    for(a=k-1;a>=1;a--){
        for(b=a;b>=1;b--){
            printf("%d",a);
        }printf("\n");

    }
 if(d!=c)
         printf("\n");
    }

  }
return 0;
}

