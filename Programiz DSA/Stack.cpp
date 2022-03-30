#include<iostream>
using namespace std;
int top = -1;
bool isEmpty(int stack[])
{
    if(top == -1)
        return true;
    else
        return false;
}
bool isFull(int stack[])
{
    if(top >= 10)
        return true;
    else
        return false;
}
void push(int stack[], int element)
{
    if(isFull(stack))
        cout << "Stack overflow";
    else    
    {
        top++;
        stack[top] = element;
    }
}
void pop(int stack[])
{
    if(isEmpty(stack))
        cout << "Stack underflow";
    else
    {
        cout << stack[top] << " was popped" << endl;
        top--;
    }
}
void peek(int stack[])
{
    if(isEmpty(stack))
        cout << "Stack underflow";
    else    
        cout << stack[top];
}
void display(int stack[])
{
    if(!isEmpty(stack))
    {
        for(int i = top; i>=0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}
int main()
{
    int stack[10];
    push(stack, 1);
    push(stack, 5);
    push(stack, 4);
    push(stack, 7);
    push(stack, 10);
    push(stack, 9);
    push(stack, 6);
    push(stack, 2);
    push(stack, 8);
    push(stack, 3);
    display(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    display(stack);
    peek(stack);
    isFull(stack);
    isEmpty(stack);
    return 0;
}