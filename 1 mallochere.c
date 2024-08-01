#include<stdio.h>
#include<stdlib.h>
int main()
{int *ptr;

    int n;
    printf("enter the number of bytes you wann allocate\n");
    scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
    printf("memory is allocated successfully\t");
    for(int i=0;i<n;i++)
    {
    printf("the value is %p\n",ptr);
    } 
  
    free(ptr);
      printf("memory is deallocated successfully\t");
    return 0;

     
}