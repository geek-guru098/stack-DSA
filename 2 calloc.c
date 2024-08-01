#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr;
     int n;
     printf("enter the number of  bytes you wann allocate\n");
     scanf("%d",&n);
     ptr=(int*)calloc(n,sizeof(int));
     printf("memory is allocated successfully\n");
     for(int i=0;i<n;i++)
     {
        printf("the address of the memory is: %d\n ",ptr);
     }
     free(ptr);
     return 0;
     }