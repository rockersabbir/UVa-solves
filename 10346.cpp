#include<bits/stdc++.h>

using namespace std;
int main(){
   int n,k;
    while( scanf("%d %d",&k,&n)!=EOF )
            {
               int temp=k;
                while(k>=n)
                {
                    temp=temp + (k/n) ;
                    k=(k/n) + (k%n) ;


                }
 printf("%d\n",temp);
            }
return 0;
}
