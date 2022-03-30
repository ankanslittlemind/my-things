#include <iostream>
using namespace std;
class A
{
    private:
    int x, y;
    public:
    void input(A a1, A a2);   
    friend void output(A a);
};
void A::input(int a1, int a2)
{
    x=a1;
    y=a2;
}
void output(A a)
{
    int sum=0;
    sum=a.x + a.y;
}
int main()
{
    A t;
    t.input();
    output(t);
    return 0;
}