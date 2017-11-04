#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char a[2000];
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(a);
        int l=strlen(a);
        for( int j=0;j<l;j++ ){
                if(a[j]>64 && a[j]<91)
                a[j]=a[j]+32;
            }l--;
        for(int i=0;i<l;i++ ){
            if(a[i]>a[i+1]){
                char x=a[i];
                a[i]=a[i+1];
                a[i+1]=x;
            }
        }l++; char ch[2000], c=a[0]; int j=0,mx=0,cn=0,ct[2000],i=0;
        for(i=0;i<l;i++ ){
                if(a[i]>96 && a[i]<123)
                while(a[i]==c){
                    j++; i++;
                }
                if(mx<j) mx=j;
                ct[cn]=j;
                i--;
                ch[cn]=a[i];
                i++;
                c=a[i];
                j=0; i--;
                cn++;
        }
        for(int i=0;i<cn;i++){
            printf("%d ",ct[i]);
        }

        for( int i=0;i<cn;i++){
                if(ct[i]==mx)
            printf("%c",ch[i]);
        } printf("\n");
    }
return 0;
}
