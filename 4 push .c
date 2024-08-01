#include<stdio.h>
#define MAX 4
int push_arr[MAX];// global declaration of array 
int top=-1;
void push(int n)
{
    if (top==MAX-1)
    {printf("stack is overflown\n");
    return;

    }
    else{
    
     top=top+1;
   push_arr[top]=n;
   printf("%d\n",n);}
}

int main(){
    push(1);
    push(21);
    push(13);
    push(19);
     push(19);
      push(19);
       push(19);
       
    return 0;
}
