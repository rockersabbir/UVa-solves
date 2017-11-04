#include<string.h>
#include<stdio.h>
int main(){
char a[10] ;
int c=0;
while(  gets(a)!=EOF   )
{   c++;
    if( strcmp(a,"*")==0 )
       { break; }

if(strcmp(a,"Hajj")==0)
{
printf("Case %d: Hajj-e-Akbar\n",c);
}
else
    printf("Case %d: Hajj-e-Asghar\n",c);


}

return 0;
}
