#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a[2000],c=0;
while(scanf("%d",&t)!=EOF){ c=0;
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    } int i=0,j=0;
for (int i=1; i < t; i++)
   {
      int index = a[i]; int j = i;
      while (j > 0 && a[j-1] > index)
      {
           a[j] = a[j-1];
           j--;
      }
      a[j] = index;
      c++;
}
    printf("Minimum exchange operations : %d\n",c);
    }
return 0;
}
