#include <iostream>
 
using namespace std;
 
class student
 
{
 
private:
  string name;
 
  int rollNo;
 
  int height;
 
  int weight;
 
public:
  student(string n, int r, int h, int w)
 
  {
 
    name = n;
 
    rollNo = r;
 
    height = h;
 
    weight = w;
  }
 
  //member function to print student's details
 
  void display(void);
 
  ~student();
};
 
void student::display(void)
{
 
  cout << "Student details:\n";
 
  cout << "\nName:" << name << "\nRoll Number:" << rollNo << "\nHeight:" << height << "\nWeight:" << weight<<endl;
}
 
student ::~student()
 
{
 
  cout << "destructor is called\n";
}
 
int main()
 
{
 
  student std("Dibyanshu", 1234, 6, 78); //object creation
 
  student std1 = std;
 
  std1.display();
 
  return 0;
}

