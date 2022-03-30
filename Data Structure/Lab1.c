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
    while (case_no != 5)
    {
        printf("\n---MENU---");
        printf("\n1. Insert element\n2. Delete element\n3. Location of element\n4. Display elements\n5. Quit");
        printf("\nEnter menu number: ");
        scanf("%d", &case_no);
        switch (case_no)
        {
        case 1:
        {
            int pos, element;
            printf("Enter any position from 1 to %d : ", n+1);
            scanf("%d", &pos);
            if (pos <= n+1)
            {
                printf("Enter element : ");
                scanf("%d", &element);
                n++;
                for (int a = n; a >= pos; a--)
                {
                    arr[a] = arr[a - 1];
                }
                arr[pos - 1] = element;
            }
            else
            {
                printf("\n*Out of range*\n");
            }
        };
        break;
        case 2:
        {
            printf("\n1. Delete by position\n2. Delete by element");
            int del_case;
            printf("\nEnter menu : ");
            scanf("%d", &del_case);
            switch (del_case)
            {
            case 1:
            {
                int del_pos;
                printf("Enter position to be deleted : ");
                scanf("%d", &del_pos);
                if (del_pos <= n)
                {
                    for (int b = del_pos; b < n; b++)
                    {
                        arr[b - 1] = arr[b];
                    }
                    --n;
                }
                else
                {
                    printf("*Out of range*\n");
                }
            }
            break;
            case 2:
            {
                int del_ele, d;
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
                    }
                }
                if (count == 0)
                {
                    printf("\n*No such element found*\n");
                }
            }
            break;
            default:
                printf("*Invalid input*\n");
                break;
            }
        }
        break;
        case 3:
        {
            int element_pos;
            printf("Enter the element : ");
            scanf("%d", &element_pos);
            for (int c = 0; c < n; c++)
            {
                if (arr[c] == element_pos)
                {
                    printf("\n%d is at %d position from right i.e. index %d\n", element_pos, c + 1, c);
                }
                else if (c + 1 == n)
                {
                    printf("\n*No such element found*\n");
                }
            }
        }
        break;
        case 4:
        {
            printf("\nArray :");
            for (int j = 0; j < n; j++)
            {
                printf(" %d", arr[j]);
            }
        };
        case 5:
            break;
        default:
            printf("*Invalid input*\n");
        }
    }
    printf("\nANKAN DAS\nUID: 20BCS5394");
}