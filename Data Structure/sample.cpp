#include <iostream>
using namespace std;
int main()
{
    int size; cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        for (int j = 0; j < i; j++)
        {
           if (arr[i] < arr[j])
           {
               arr[j] = arr[i];
               arr[i] 
           } 
        }
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}