#include <iostream>
using namespace std;
int partition(float a[], int lb, int ub)
{
    float pivot = a[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            float temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    a[lb] = a[end];
    a[end] = pivot; 
    return end;
}
void quicksort(float a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);
        quicksort(a, loc + 1, ub);
    }
}
int main()
{
    int size;
    cout << "Size : ";
    cin >> size;
    float a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    quicksort(a, 0, size - 1);
    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}