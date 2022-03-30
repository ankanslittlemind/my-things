#include <iostream>
using namespace std;
int top = -1;
int n = 6;
int stack[6];
void push()
{
    int x;
    cout << "Enter data : ";
    cin >> x;
    if (top == n)
        cout << "Overflow";
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
        cout << "Underflow";
    else
    {
        item = stack[top];
        top--;
        cout << item << " is popped";
    }
}
void peek()
{
    if (top == -1)
        cout << "Empty";
    else
        cout << stack[top];
}
void display()
{
    for (int i = top; i >= 0; i--)
        cout << "\n" << stack[i];
    if (top == -1)
        cout << "Empty stack";
}
int main()
{
    int menu;
    cout << "Stack of 6 elements";
    while (menu != 0)
    {
        cout << "\n*MENU*\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\nEnter menu no. : ";
        cin >> menu;
        switch (menu)
        {
        case 1:
        {
            push();
        }
        break;
        case 2:
        {
            pop();
        }
        break;
        case 3:
        {
            peek();
        }
        break;
        case 4:
        {
            display();
        }
        break;
        default:
        {
            cout << "Invalid input";
        }
        case 0:
        {
            exit;
        }
        }
    }
}