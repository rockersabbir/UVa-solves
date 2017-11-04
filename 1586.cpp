#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t,num; char a[2000]; double n,res;
    scanf("%d",&t); getchar();
    while(t--){
        gets(a); num=0;res=0.0;
        int l=strlen(a);
        for(int i=0;i<l;i++){
            if(a[i]=='C'){
                n=12.01;
if(a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'|| a[i+1]=='5'|| a[i+1]=='6'|| a[i+1]=='7'|| a[i+1]=='8'||a[i+1]=='9')
{  num=a[i+1]- '0' ;
if(a[i+2]=='1'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'|| a[i+2]=='5'|| a[i+2]=='6'|| a[i+2]=='7'|| a[i+2]=='8'||a[i+2]=='9')
{num=a[i+2]- '0' +( num*10 ); }
 res=n*num +res;
}
else {
    num=1; res=n*num +res;
}
            }
            else if(a[i]=='N'){
                n=14.01;
                if(a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'|| a[i+1]=='5'|| a[i+1]=='6'|| a[i+1]=='7'|| a[i+1]=='8'||a[i+1]=='9')
{  num=a[i+1]- '0' ;
if(a[i+2]=='1'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'|| a[i+2]=='5'|| a[i+2]=='6'|| a[i+2]=='7'|| a[i+2]=='8'||a[i+2]=='9')
{num=a[i+2]- '0' +( num*10 ); }
 res=n*num +res;
}
else {
    num=1; res=n*num +res;
}
            }
            else if(a[i]=='O'){
                n=16.00;
                if(a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'|| a[i+1]=='5'|| a[i+1]=='6'|| a[i+1]=='7'|| a[i+1]=='8'||a[i+1]=='9')
{  num=a[i+1]- '0' ;
if(a[i+2]=='1'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'|| a[i+2]=='5'|| a[i+2]=='6'|| a[i+2]=='7'|| a[i+2]=='8'||a[i+2]=='9')
{num=a[i+2]- '0' +( num*10 );; }
 res=n*num +res;
}
else {
    num=1; res=n*num +res;
}
            }
            else if(a[i]=='H'){
                n=1.008;
                if(a[i+1]=='1'||a[i+1]=='2'||a[i+1]=='3'||a[i+1]=='4'|| a[i+1]=='5'|| a[i+1]=='6'|| a[i+1]=='7'|| a[i+1]=='8'||a[i+1]=='9')
{  num=a[i+1]- '0' ;
if(a[i+2]=='1'||a[i+2]=='2'||a[i+2]=='3'||a[i+2]=='4'|| a[i+2]=='5'|| a[i+2]=='6'|| a[i+2]=='7'|| a[i+2]=='8'||a[i+2]=='9')
{num=a[i+2]- '0' +( num*10 ); }
 res=n*num +res;
}
else {
    num=1; res=n*num +res;
}
            }
        }
        printf("%.3lf\n",res);
    }
return 0;
}
