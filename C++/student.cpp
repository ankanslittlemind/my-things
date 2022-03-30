#include <iostream>
using namespace std;

class read
{
private:
    char name[30];
    int age;
    char gender;

public:
    void getinfo(void);
    void putinfo(void);
};

void read::getinfo(void)
{
    cout << "Enter student's basic information" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender(M/F/T): ";
    cin >> gender;
}

void read::putinfo(void)
{
    cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
}

class print : public read
{
private:
    int totalM;
    float perc;
    char grade;

public:
    void getresult(void);
    void putresult(void);
};

void print::getresult(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks(out of 500): ";
    cin >> totalM;
    perc = (float)((totalM * 100) / 500);
    cout << "Grade: ";
    cin >> grade;
}

void print::putresult(void)
{
    cout << "Total Marks: " << totalM << "\nPercentage: " << perc << "\nGrade: " << grade << endl;
}

int main()
{
    print std;

    std.getinfo();
    std.getresult();

    std.putinfo();
    std.putresult();

    cout<<"\nName: ANKAN DAS\nUID: 20BCS5394\n\n";

    return 0;
}