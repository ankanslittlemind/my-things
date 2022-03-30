#include <stdio.h>
void mergeSort(float[], int, int);
void merge(float[], int, int, int);
void main()
{
    float a[10] = {1.3, 1.43, 8.5, 9.89, 9.80, 1.431, 2.87, 4.4, 7.23, 10.10};
    printf("Unsorted array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%f ", a[i]);
    }
    mergeSort(a, 0, 9);
    printf("\n\nMerge sorted array in descending order is : ");
    for (int i = 10 - 1; i >= 0; i--)
    {
        printf("%f ", a[i]);
    }
    printf("\nANKAN DAS\nUID: 20BCS5394");
}
void mergeSort(float a[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}
void merge(float a[], int beg, int mid, int end)
{
    int i = beg, j = mid + 1, k, index = beg;
    float temp[10];
    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            temp[index] = a[i];
            i = i + 1;
        }
        else
        {
            temp[index] = a[j];
            j = j + 1;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[index] = a[j];
            index++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[index] = a[i];
            index++;
            i++;
        }
    }
    k = beg;
    while (k < index)
    {
        a[k] = temp[k];
        k++;
    }
}