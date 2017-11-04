#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[5000];int k,i;
    while( gets(a) ){
        int l =strlen(a);
        for( i=0;i<=l;i++){
            if( a[i]==' '   ){
                int j=i;
                while(j--){

                    if( a[j]==' ' ) {
                        printf(" ");
                            break;}

                    printf("%c",a[j]);
                     if(j==0){
                        printf(" ");
                            break;
                    }
                }
            }
            else if(i==l){
                int k=i;
                while(k--){

                    if( a[k]==' ' ) {

                            break;}

                    printf("%c",a[k]);
                }
            }
        }

         printf("\n");
    }
    return 0;
}
