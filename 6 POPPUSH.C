#include<stdio.h>
#define max 10

// Global variables
int data;
int arr[max];
int top = -1;



// Function to push an element onto the stack
void push() {
    if (top == max - 1)
        printf("Stack is overflow\n");
    else {
        top = top + 1;
        printf("Enter data: ");
        scanf("%d", &data);
        arr[top] = data;
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1)
        printf("Stack is underflow\n");
    else {
        printf("Popped element: %d\n", arr[top]);
        top = top - 1;
    }
}

// Function to display the elements in the stack
void display() {
    if (top == -1)
        printf("Stack is underflow\n");
    else {
        printf("Stack elements are:\n");
        for (int i = 0; i <= top; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int main() {
    int choice;

    // Menu for the user
    while (1)// run infinite amount of time
     {
        printf("\nEnter the choice\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program\n");
                return 0;
            default:
                printf("Your choice is invalid\n");
        }
    }

    return 0;
}

