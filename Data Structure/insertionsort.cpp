#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int a[size];
    // array input
    cout << "Enter " << size << " elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    // insertion sort
    for (int i = 1; i < size; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 and a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    // sortted array output
    cout << "Insertion sortted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}