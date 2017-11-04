#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char a[5000];
    while( gets(a) ){
        int j=0,i=0;
        int l= strlen(a);
        for(i=0;i<l;i++){
            if( isalpha(a[i]) ){
               // while ( isalpha(a[i]) ) i++;
                    j++;
            }
        }
        printf("%d\n",j);
    }
    return 0;
}
