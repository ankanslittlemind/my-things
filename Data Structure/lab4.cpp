#include <iostream>
using namespace std;
int bubblesort(int a[], int size);
int main()
{
    int n, i, swaps;
    cout << "***BUBBLE SORTING***";
    cout << "\nEnter number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swaps = bubblesort(arr, n);
    cout << endl;
    cout << "Number of swaps is : " << swaps;
    return 0;
}
int bubblesort(int a[], int size)
{
    int temp, count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size ; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                count++;
            }
        }
    }
    cout << "Bubble sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return count;
}