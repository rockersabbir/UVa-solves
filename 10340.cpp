#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[100000],b[100000];
   long long int x=0,y=0,c=0,lena,lenb;
    while( scanf("%s%s",&a,&b)!=EOF )
    {
        lena=strlen(a);
        lenb=strlen(b);
        while( y!=lenb )
        {
            if(a[x]==b[y])
            {
                c++;
                x++;
                y++;
            }
            else y++;
        }

        if(c==lena) printf("Yes\n");
        else printf("No\n");
        x=0;c=0;y=0;
        memset(&a,0,sizeof(a));
        memset(&b,0,sizeof(b));
    }
return 0;
}
