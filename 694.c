#include<stdio.h>
#include<math.h>
int main(){
    int i,l;
    long int a,cunt=0,A;
   while( scanf("%d%d",&a,&l)!=EOF &&a>-1 && l>-1 ){
        A=a;
    cunt++;
    for(i=1;i<=l;i++){
        if(a%2==0){
            a=a/2;
            if(a==1 || a>l){
            i++;
            break;
        }
        }
        else if (a%2!=0){
            a=(3*a)+1;
            if(a==1 || a>l){
            break;
        }
        }
    }
    printf("Case %d: A = %d, limit = %d, number of terms = %d\n",cunt,A,l,i);
   }
    return 0;
}
