#include<iostream>
using namespace std;
int main()
{
    int subject, i;
    float marks, avg, total, percent;
    
    cout<<"Enter number of subjets : ";
    cin>>subject;

    for (i=1; i<=subject; i++)
    {
        cout<<"Enter marks of subject ",subject," : ";
        cin>>marks;
        
        total += marks;
    }

    
}