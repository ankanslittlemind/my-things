#include <iostream>
using namespace std;
int main()
{
    int temp, i, j;
    int arr[10] = {7, 8, 1, 3, 4, 5, 6, 9, 10, 2};
    cout << "Array : ";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Bubble sorted array : ";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}