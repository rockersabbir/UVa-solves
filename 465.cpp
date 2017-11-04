#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char a[5000],b[5000],sign[100];
    while(  scanf("%s %s %s",&a,&b,&sign)!=EOF ){
            int n1=strlen(a);
            int n2=strlen(b);int c=0;
            long long int t1=0,t=0,t2=0,t0=0,t3;
            for(int i=0;i<n1;i++){
                 t1= t+ ( a[i]- '0' );
                t=t1*10;
            }
            for(int j=0;j<n1;j++){
                 t2= t0+ ( b[j]- '0' );
                t0=t2*10;
            }
            t3=t1+t2;printf("%lld/n",t3);
        if(n1>=10 && t1>=2147483648){ printf("first number too big\n");c++; }
        else if(n2>=10 && t2>=2147483648 ) {printf("second number too big\n"); c++;}
        if(c!=0 || t3>= 2147483648){
             printf("result too big\n\\");
        }
    }


return 0;
}

