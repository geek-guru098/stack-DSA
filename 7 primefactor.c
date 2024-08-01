#include<stdio.h>

int top = -1;
#define max 10
int arr[max];

void push(int i)
{
    if (top == max - 1)
        printf("Stack is overflown\n");
    else
    {
        top = top + 1;
        arr[top] = i;
    }
}

void pop()
{
    if (top == -1)
        printf("Stack is underflown\n");
    else
        top--;
}

void primeFactors(int num)
{
    int i = 2;
    while (num != 1)
    {
        while (num % i == 0)
        {
            push(i);
            num = num / i;
        }
        i++;
    }

    printf("Prime factors: ");
    while (top != -1)
    {
        printf("%d ", arr[top]);
        pop();
    }
    printf("\n");
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    primeFactors(number);

    return 0;
}
