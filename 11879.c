#include<stdio.h>
#include<string.h>
int main(){
     	char ch[100];
     	while(  scanf("%s",&ch)!=EOF    ){
     	int count=0,i,l;
     	l=strlen(ch);
     	for(i=0;i<l;i++){
            count=count*10+ch[i]-'0';
            count=count%17;
     	}
     	if(l==1&& count==0){ break; }
     	else if(count==0) {printf("1\n");}
     	else if(count!=0){ printf("0\n");}
     	}
     return 0;
}



