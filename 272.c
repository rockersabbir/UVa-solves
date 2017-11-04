#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[1000];int c,e=0,i;
    while( gets(a)!=EOF )
    {c=strlen(a);
    for(i=0;i<c;i++){
        if( a[i]=='"' ){
            e++;
           if(e%2==1)
            printf("``");
        else
            printf("''");

    }
    else printf("%c",a[i]);

        }
        printf("\n");

    }





return 0;
}

