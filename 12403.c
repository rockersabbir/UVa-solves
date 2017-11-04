#include<stdio.h>
#include<stdlib.h>
int main(){
    int y,z=0,input,amount=0;
    int i=0,j=-1,k,n;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",&a);

    if (strcmp(a, "report") ==0)
     {
         printf ("%d\n", amount);
         }
else{
    scanf("%d",&input);
      amount += input;
}
    }

return 0;
}
