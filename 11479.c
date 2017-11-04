#include<stdio.h>
#include<math.h>
int main(){
    int i,n,a,b,c,cunt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            cunt++;
    scanf("%d%d%d",&a,&b,&c);

    if( a==b && b==c ){
        printf("Case %d: Equilateral\n",cunt);
    }
    else if( a==b || c==b ||c==a ){
            if(a<=0){
                 printf("Case %d: Invalid\n",cunt);
            }
           else if( b<=0){
                 printf("Case %d: Invalid\n",cunt);
           }
            else if(c<=0){
                 printf("Case %d: Invalid\n",cunt);
            }
            else
        printf("Case %d: Isosceles\n",cunt);
    }
    else if(a+1==b || b+1==c  ||a-1==b || a-1==c || a+1==c ){
        if(a==1 && b==2 ){
             printf("Case %d: Invalid\n",cunt);
        }
        else if( c+1!=b){
             printf("Case %d: Invalid\n",cunt);
        }
        else
        printf("Case %d: Scalene\n",cunt);
    }

    else
        printf("Case %d: Invalid\n",cunt);
    }

return 0;
}
