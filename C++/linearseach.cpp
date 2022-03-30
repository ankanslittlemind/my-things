#include<iostream>
using namespace std;
void linearsearch(int arr[], int size, int key)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element index: " << i << endl;
            j = 1;
        }
    }
    if (j == 0)
        cout << "Element not found";
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element: ";
    int key; cin >> key;
    linearsearch(arr, size, key);
}