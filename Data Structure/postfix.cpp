#include <iostream>
using namespace std;
#define size 100
char stack[size];
int top = -1;
void push(char element)
{
    if (top == -1)
    stack[++top] = element;
}
void pop()
{
    return (stack[top--])
}