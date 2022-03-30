#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end)/2;
        if (arr[mid] < key)
            start = mid + 1;
        else if (arr[mid] > key)
            end = mid - 1;
        else if (arr[mid] == key)
            return mid;
    }
}
int main()
{
    int size; cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element: ";
    int key; cin >> key; 
    cout << "Index : " << binarysearch(arr, size, key);
    return 0;
}