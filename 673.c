#include<stdio.h>
#include<string.h>
#define SIZE 256
char stack[SIZE];

 int top;

 void push (char c){
    ++top;
    stack[top] = c;
}
  void pop( ){
  --top;
  }
  int main()
{
    int i,l,n,flag;
    char c[SIZE];
    scanf("%d",&n);
getchar();
    while(n--){
            stack[SIZE] = '\0';
        top=-1;
        gets(c);
    i=0; flag=0;
        l=strlen(c);
        while (i<l){
            if (c[0] == ')'){
                flag = 1;
                break;
            }
            else{
                if (c[i] == '(' || c[i] == '[') {
                        push (c[i]);
                }
                else if (c[i] == ')' && stack[top]=='('){
                            pop ();
                         }
                else if (c[i] == ']' && stack[top] == '['){
                    pop();
                }
                else flag = 1;
            }
            ++i;
        }
if (top != -1) flag =1;
if (flag == 1) printf ("No\n");
         else if( flag==0) printf ("Yes\n");

    }


    return 0;
}
