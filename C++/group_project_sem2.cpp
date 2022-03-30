#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <conio.h>
using namespace std;
class phoneBook{
    char name[20],phno[15];
    public:
    void getdata();
    void showdata();
    char *getname(){ return name; }
    char *getphno(){ return phno; }
    void update(char *nm,char *telno){
        strcpy(name,nm);
        strcpy(phno,telno);
    }
};

void phoneBook :: getdata(){
    cout<<"\nEnter Name : ";
    cin>>name;
    cout<<"Enter Phone No. : ";
    cin>>phno;
}

void phoneBook :: showdata(){
    cout<<"\n";
    cout<<setw(10)<<name;
    cout<<" : "<<setw(10)<<phno;
}


int main()
{
    phoneBook rec;
    fstream file;
    file.open("out.txt", ios::ate | ios::in | ios::out | ios::binary);
    char ch,nm[20],telno[6];
    int choice,found=0;
    while(1)
    {
        cout<<"\n\n-- -- Phone Book -- --\n";
        cout<<"1) Add New Record\n";
        cout<<"2) Display All Records\n";
        cout<<"3) Exit\n";
        cout<<"Choose your choice : ";
        cin>>choice;
        switch(choice){
            case 1 : //New Record
                 rec.getdata();
                 cin.get(ch);
                 file.write((char *) &rec, sizeof(rec));
                 break;

            case 2 : //Display All Records
                 file.seekg(0,ios::beg);
                 cout<<"\n\nRecords in Phone Book\n";
                 while(file){
                    file.read((char *) &rec, sizeof(rec));
                    if(!file.eof())
                        rec.showdata();
                 }
                 file.clear();
                 getch();
                 break;

            
            case 3 : goto out;
        }
    }
out:
file.close();
return 0;
}