#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t,c,cnt=1,spc,c1; char a[5000], b[5000];
    scanf("%d",&t);
    getchar();
    while(t--){ c=0; spc=0,c1=0;
        gets(a);
        gets(b);
        int l= strlen(a);
        int l1=strlen(b);
             if(l!=l1){
                for(int i=0;i<l;i++){
                if(a[i]!=b[i]){
                    if(a[i]==' ') spc++;  break;
                }
            }
            if(spc!=0) printf("Case %d: Output Format Error\n",cnt);
            else printf("Case %d: Wrong Answer\n",cnt);
             }
        else if(l==l1){
            for(int i=0;i<l;i++){
                if(a[i]==b[i]) c++;
            }
            if(c==l) printf("Case %d: Yes\n",cnt);
            else printf("Case %d: Wrong Answer\n",cnt);
        }
        cnt++;
    }
return 0;
}
