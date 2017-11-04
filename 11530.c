#include<stdio.h>
int main(){
 int i,j,len,count,t,c=1;
 char n[100];
    scanf("%d",&t);
 getchar();
 for(j=0;j<t;j++){

  gets(n);
  len=strlen(n);
  count=0;
  for(i=0;i<len;i++){
    if( n[i]=='a' ||n[i]=='d'||n[i]=='g'||n[i]=='j'||n[i]=='m'||n[i]=='p'||n[i]=='t'||n[i]=='w' || n[i]==' ' ) count=count+1;
    else if(n[i]=='b' ||n[i]=='e'||n[i]=='h'||n[i]=='k'||n[i]=='n'||n[i]=='q'||n[i]=='u'||n[i]=='x'  ) count=count+2;
    else if(n[i]=='c' ||n[i]=='f'||n[i]=='i'||n[i]=='l'||n[i]=='o'||n[i]=='r'||n[i]=='v'||n[i]=='y'  ) count=count+3;
    else if( n[i]=='s'|| n[i]=='z' ) count=count+4;

        }
    printf("Case #%d: %d\n",c,count);
    c++;
 }
return 0;
}
