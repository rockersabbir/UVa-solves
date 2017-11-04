#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
char    a[5000];int i;
    while( gets(a) ){
        int l=strlen(a);
        for(i=0;i<l;i++){
            if(a[i]=='A') printf("2");
            if(a[i]=='B') printf("2");
            if(a[i]=='C') printf("2");
            if(a[i]=='D') printf("3");
            if(a[i]=='E') printf("3");
            if(a[i]=='F') printf("3");
            if(a[i]=='G') printf("4");
            if(a[i]=='H') printf("4");
            if(a[i]=='I') printf("4");
            if(a[i]=='J') printf("5");
            if(a[i]=='K') printf("5");
            if(a[i]=='L') printf("5");
            if(a[i]=='M') printf("6");
            if(a[i]=='N') printf("6");
            if(a[i]=='O') printf("6");
            if(a[i]=='P') printf("7");
            if(a[i]=='Q') printf("7");
            if(a[i]=='R') printf("7");
            if(a[i]=='S') printf("7");
            if(a[i]=='T') printf("8");
            if(a[i]=='U') printf("8");
            if(a[i]=='V') printf("8");
            if(a[i]=='W') printf("9");
            if(a[i]=='X') printf("9");
            if(a[i]=='Y') printf("9");
            if(a[i]=='Z') printf("9");
            if(a[i]=='-') printf("-");
            if(a[i]=='1') printf("1");
            if(a[i]=='0') printf("0");
        }printf("\n");
    }
return 0;
}
