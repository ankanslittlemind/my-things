#include <iostream>
using namespace std;
int main()
{
    int size, case_no;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    while (case_no != 3)
    {
        cout << "\n1. Insert value \n2. Delete value \n3. Quit \nEnter menu number : ";
        cin >> case_no;
        switch (case_no)
        {
        case 1:
        {
            int key;
            cout << "Enter the value you want to insert : ";
            cin >> key;
            int i;
            for (i = size - 1; (i >= 0 && arr[i] > key); i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = key;
            size = size + 1;
            cout << "Array after insertion : ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        break;
        case 2:
        {
            int key;
            cout << "Enter the value you want to delete : ";
            cin >> key;
            int i, loc;
            for (i = 0; i < size; i++)
            {
                if (arr[i] == key)
                    loc = i;
            }
            size = size - 1;
            for (i = loc; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
            cout << "Array after deletion : ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
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