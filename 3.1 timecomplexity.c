#include<stdio.h>
// what is time complexity of th following iteration:
void fun(int n)
{ 
    int i,j;//constant time
    for(i=1;i<=n/3;i++)// n time
    for (j=1;j<=n;j+=4)// n time 
    printf("hello world\n");

}
// till here 
int main()
{ 
    fun(12);
    return 0;
}
// hence the total time complexity is O(n^2)