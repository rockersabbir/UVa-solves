#include<bits/stdc++.h>
int main(){
    char a[5000],Q;
    int i,total,c,k,j,r,t,s,T,CUNT=0;
    scanf("%d",&t);
   for(s=0;s<t;s++) {CUNT++;
        scanf("%s",&a);
            total=0;c=0,k=0;
        int l= strlen(a);
        printf("Case %d: ",CUNT);
        for(i=0;i<l;i++){
if(  a[i]=='A'|| a[i]=='B' || a[i]=='C' ||a[i]=='D' || a[i]=='E' ||a[i]=='F' || a[i]=='G' ||a[i]=='H' || a[i]=='I' ||a[i]=='J' || a[i]=='K'|| a[i]=='L' || a[i]=='M' ||a[i]=='N' || a[i]=='O' ||a[i]=='P' || a[i]=='Q' ||a[i]=='R' || a[i]=='S'
                   ||a[i]=='T' || a[i]=='U'|| a[i]=='V' || a[i]=='W' || a[i]=='X' || a[i]=='Y'|| a[i]=='Z'   )
                   {
                   if(k==1)
                     {for(j=0;j<total;j++){
                        printf("%c",Q);
                     }
                     k=0; total=0;c=0;
                     Q=a[i];}

                if(k==0){
                    Q=a[i];

                    k++;}
                }
else if(    a[i]=='1'|| a[i]=='2' || a[i]=='3' ||a[i]=='4' || a[i]=='5' ||a[i]=='6' || a[i]=='7' ||a[i]=='8' || a[i]=='9' ||a[i]=='0' )
{
    if(c==1){
    total= a[i]- '0' + total*10;
    T=total;}

    if(c==0){
                total= a[i]- '0';
                T=total;
                c++;}
            }

        } for(r=0;r<T;r++){
            printf("%c",Q);
        }
        printf("\n");
    }
return 0;
}
