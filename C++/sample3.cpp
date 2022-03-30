// obtaining file size
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    streampos begin, end;
    ifstream myfile("C:\\Users\\ankan\\OneDrive\\Documents\\new_file1.txt", ios::binary);
    begin = myfile.tellg();
    myfile.seekg(0, ios::end);
    end = myfile.tellg();
    cout << sizeof("C:\\Users\\ankan\\OneDrive\\Documents\\new_file1.txt");
    myfile.close();
    cout << "size is: " << (end - begin) << " bytes.\n";
    return 0;
}
