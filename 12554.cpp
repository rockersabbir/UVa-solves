#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,i=0,j=0,c=0;
    char ar[100][100];
    cin>>a;

        for( int i=0;i<a;i++) scanf("%s",&ar[i]);

        char ha[][20]{
             "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you","Happy","birthday","to", "Rujia", "Happy", "birthday", "to", "you"
        };
        i=0;j=0;
        while(1){
            printf("%s: %s\n",ar[i],ha[j]);

            if(i==a-1) c=1;

            if(j==15 && c==1) break;

            i++;j++;

            if(i>=a) i=0;
            if(j>=16) j=0;

        }


return 0;
}
