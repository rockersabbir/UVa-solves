#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char a[5000],ch;
    int t,c,d;
    scanf("%d",&t);
    getchar();
    while( t-- ){
        c=0;d=0;
        gets(a);
        int l=strlen(a);


        int i=0;
        if(l==2) printf("NO LOOP\n");
        else{
        for(int j=0;j<l;j++){
            if(a[j]==' '){

            }
            else{
                i=j;
                ch=a[i];
            }
        }
    }
return 0;
}

