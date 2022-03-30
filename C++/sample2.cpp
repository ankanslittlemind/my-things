// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream o;
    o.open("text.txt");
    o<<"Chandigarh Univerisyt",13;
    o.seekp(8);
    o<<"aaaaaa",6;
    o.close();
    return 0;
}