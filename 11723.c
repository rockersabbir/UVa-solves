#include<stdio.h>
#include<math.h>
int main(){
    int r ,l=1,n,j, i;
   while( scanf("%d %d",&r,&n)!=EOF &&r!=0 &&n!=0 ){
 int a,b,s;
    a=r-n;
    s=(26*n)+n;
    j=r-n;
    for(i=1;i<=26;i++){
            b=i*n;
         if(r<n){
             printf("Case %d: 0\n",l);break;
         }
        else if(a==0){
            printf("Case %d: 0\n",l);break;
    }
   else if(r>s){
    printf("Case %d: impossible\n",l);break;
}
            else  if(b>=j) {
            printf("Case %d: %d\n",l,i);break;
        }
    }l++;
   }
return 0;
}
