#include <iostream>
using namespace std;
int main()
{
    int n = 10, i = 0;
    int a[n] = {10, 2, 4, 3, 5, 6, 7, 8, 9, 1};
    do 
    {
        int j = i + 1;
        do 
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
            j++;
        }
        while (j < n);
        i++;
    }
    while (i < n - 1);
    for (int x = 0; x < n; x++)
    {
        cout << a[x] << " ";
    }
    return 0;
}