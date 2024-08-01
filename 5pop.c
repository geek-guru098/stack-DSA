#include<stdio.h>
#define max 4
int top=-1;
int arr[max];
void pop(int n);
int main(){


     return 0; 
}
void push (int n)
{
     if(top==-1)
     printf("stack is uderflown\n");
     else
    n=arr[top];
     top=top-1;

}