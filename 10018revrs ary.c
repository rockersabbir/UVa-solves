#include<stdio.h>
#include<math.h>

long long rev(long long temp){
    long long reverse=0;
  while(temp!=0)
  {
     reverse=reverse*10+(temp%10);
     temp/=10;
  } return reverse;

}


int pall(long long a){
    if(a==rev(a)) return 1;

    else return 0;
}


int main(){
    int n,c;
    scanf("%d",&n);
while(n-- ){
    long long   num;
    scanf("%lli",&num);
    c=0;
    while(!pall(num)){
        num=num+rev(num);
        c++;
    }
    printf("%d %lli\n",c,num);

}
return 0;
}
