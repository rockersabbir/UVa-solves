#include<stdio.h>
#include<math.h>
int main(){
    int i,n,a[6];
   while( scanf("%d",&n)!=EOF ){
    int c=0;
    for(i=0;i<5;i++){
            scanf("%d",&a[i]);
        if(a[i]==n){
            c++;
        }
    }
    printf("%d\n",c);
   }

return 0;
}
