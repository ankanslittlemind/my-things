#include <iostream>

using namespace std;

class Address
{

public:
    string addressLine, city, state;

    Address(string addressLine, string city, string state)

    {

        this->addressLine = addressLine; //this is a reference variable

        this->city = city;

        this->state = state;
    }
};

class Employee

{

private:
    Address *add; //Employee HAS-A Address

public:
    int id;

    string name;

    Employee(int id, string name, Address *address) //& addr op

    { //variable = value;

        this->id = id;

        this->name = name;

        this->add = address;
    }

    void display()

    {

        cout << id << " " << name << " " <<

            add->addressLine << " " << add->city << " " << add->state << endl;
    }
};

int main(void)
{

    Address a1 = Address("C-146, Sec-15", "Noida", "UP");

    Employee e1 = Employee(101, "Nakul", &a1);

    e1.display();

    return 0;
}