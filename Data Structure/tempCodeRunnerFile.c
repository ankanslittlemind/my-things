#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int case_no;
    while (case_no != 4)
    {
        printf("\n---MENU---");
        printf("\n1. Insert element at beginning\n2. Delete element by value\n3. Display elements\n4. Quit");
        printf("\nEnter menu number: ");
        scanf("%d", &case_no);
        switch (case_no)
        {
        case 1:
        {
            int element;
            printf("Enter element : ");
            scanf("%d", &element);
            n++;
            for (int a = n; a >= 1; a--)
            {
                arr[a] = arr[a - 1];
            }
            arr[0] = element;
            printf("Inserted %d", element);
        };
        break;
        case 2:
        {
            int del_ele;
            int count = 0;
            printf("Enter element to be deleted : ");
            scanf("%d", &del_ele);
            for (int y = 0; y < n; y++)
            {
                if (arr[y] == del_ele)
                {
                    for (y; y < n; y++)
                    {
                        arr[y] = arr[y + 1];
                    }
                    --n;
                    count++;
                    printf("Deleted %d", del_ele);
                }
            }
            if (count == 0)
            {
                printf("\n*No such element found*\n");
            }
        }
        break;
        case 3:
        {
            printf("\nArray :");
            for (int j = 0; j < n; j++)
            {
                printf(" %d", arr[j]);
            }
        }
        break;
        case 4:
        {
            break;
        }
        break;
        default:
            printf("*Invalid input*\n");
        }
    }
    printf("\nANKAN DAS\nUID: 20BCS5394");
}