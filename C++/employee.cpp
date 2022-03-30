#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    float payrate;

public:
    Employee(string thename, float thepayrate);

    string getname() const;
    float getpayrate() const;

    float pay(float hoursworked) const;
};


Employee::Employee(string thename, float thepayrate)
{
    name = thename;
    payrate = thepayrate;
}

string Employee::getname() const
{
    return name;
}

float Employee::getpayrate() const
{
    return payrate;
}

float Employee::pay(float hoursworked) const
{
    return hoursworked * payrate;
}

class Manager : public Employee
{
    protected:
    bool salaried;
    
    public:
    Manager(string thename, float thepayrate, bool issalaried);
    bool getsalaried() const;
    float pay(float hoursworked) const;
};
Manager :: Manager(string thename, float thepayrate, bool issalaried);
float Manger
