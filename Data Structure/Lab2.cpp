#include <iostream>
using namespace std;
int main()
{
    int case_no, element;
    while (case_no != 3)
    {
        cout << "\n1. Linear search\n2. Binary search\n3. Quit\nEnter menu no. : ";
        cin >> case_no;
        switch (case_no)
        {
        case 1:
        {
            int arr[10];
            cout << "Enter 10 elements in any order : ";
            for (int i = 0; i < 10; i++)
            {
                cin >> arr[i];
            }
            cout << "Enter the element : ";
            cin >> element;
            for (int c = 0; c < 10; c++)
            {
                if (arr[c] == element)
                {
                    cout << "\nIndex of " << element << " is " << c << "\n";
                }
                else if (c + 1 > 10)
                {
                    cout << "\n*No such element found*\n";
                }
            }
        }
        break;
        case 2:
        {
            int arr[10];
            cout << "Enter 10 elements in ascending order : ";
            for (int i = 0; i < 10; i++)
            {
                cin >> arr[i];
            }
            cout << "Enter the element : ";
            cin >> element;
            int beg = 0, end = 9, pos = -1;
            while (beg <= end)
            {
                int mid;
                mid = (beg + end) / 2;
                if (arr[mid] == element)
                {
                    pos = mid;
                    cout << "\nIndex of " << element << " is " << pos << "\n";
                    break;
                }
                else if (arr[mid] > element)
                {
                    end = mid - 1;
                }
                else
                {
                    beg = mid + 1;
                }
            }
            if (pos == -1)
            {
                cout << "Element is not present in array";
            }
        }
        break;
        case 3:
        {
            break;
        }
        default:
        {
            cout << "\n*Invalid input*\n";
        }
        }
    }
    cout << "\nANKAN DAS\nUID: 20BCS5394\n";
    return 0;
}