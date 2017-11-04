#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    int t;char a[5000],b[5000],c,c1,v,v1,l1,l2;
    scanf("%d",&t);
     getchar();
    for(int j=0;j<t;j++){
        gets(a);
        gets(b);
         l1=strlen(a);
        l2=strlen(b);
         c=0;c1=0;v=0;v1=0;
        for(int i=0;i<l1;i++){
            if( a[i]!='a' &&  a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' ){
                c++;
                if( b[i]==a[i]  ){
                c1++;
            }
            }
          if( a[i]=='a' ||  a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'  ){
                v++;
                if( b[i]=='a' ||  b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'  ){
                v1++;
            }
            }
        }
    if(l1!=l2) {
            printf("No\n");
        }
       else if(c==c1 && v==v1) printf("Yes\n");
        else printf("No\n");
    }
return 0;
}
