#include<stdio.h>
int main()
{
     int n;
     printf("enter the values of n : ");
     scanf("%d",&n);
     if(n==0)// n==0 takes constant time 
     //  
     {
         printf("this iteration will take constant amount of time");
     }
     else {
        for(int i=0;i<n;i++)// statement iterates n number of times
        // Time Complexity is BIG O of n : BIG O(n)
        {
          printf("here is the value of i:  %d\n",i);   
        }
     }
     return 0;
}