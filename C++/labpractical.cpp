#include <iostream>
using namespace std;
class Average
{
public:
    static void Calc_Average(int x, int y, int z)
    {
        cout << "Average of three numbers : " << ((x + y + z) / 3);
    }
};
int main()
{
    int a, b, c;
    cout << "Enter three numbers : ";
    cin >> a >> b >> c;
    Average::Calc_Average(a, b, c);
    cout << "\n\nAnkan Das\nUID: 20BCS5394";
    return 0;
}