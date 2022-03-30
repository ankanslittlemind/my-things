#include <iostream>
using namespace std;
int main()
{
    int row, col, block, menu;
    cout << "Enter size of 3D array (p*q*r) : ";
    cin >> row >> col >> block;
    int a[row][col][block];
    cout << "Enter elements \n";
    for (int k = 0; k < block; k++)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "Index [" << i << "][" << j << "][" << k << "] : ";
                cin >> a[i][j][k];
            }
        }
    }
    while (menu != 0)
    {
        cout << "1. Display 3D matrix\n2. Sum of two same matrix\n3. Transrpose of matrix\n4. Product of two same matrix\n0. Exit\n";
        cout << "Enter menu no. : ";
        cin >> menu;
        switch (menu)
        {
        case 1: // Display matrix
        {
            for (int k = 0; k < block; k++)
            {
                cout << "\nBlock " << k + 1 << ":\n";
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        cout << a[i][j][k] << " ";
                        if (j + 1 == col)
                        {
                            cout << "\n";
                        }
                    }
                }
                cout << "\n";
            }
        }
        break;
        case 2: // Sum
        {
            int s[row][col][block], b[row][col][block];
            cout << "Enter another " << row << "*" << col << "*" << block << " matrix \n";
            for (int k = 0; k < block; k++) // Second matrix
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        cout << "Index [" << i << "][" << j << "][" << k << "] : ";
                        cin >> b[i][j][k];
                    }
                }
            }
            for (int k = 0; k < block; k++) // Adding two matrix
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        s[i][j][k] = a[i][j][k] + b[i][j][k];
                    }
                }
            }
            cout << "\nSum of the two matrix \n";
            for (int k = 0; k < block; k++) // Display sum
            {
                cout << "\nBlock " << k + 1 << ":\n";
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        cout << s[i][j][k] << " ";
                        if (j + 1 == col)
                        {
                            cout << "\n";
                        }
                    }
                }
                cout << "\n";
            }
        }
        break;
        case 4: // Product
        {
            if (row != col)
            {
                cout << "\nMultiplication not possible as row is not equal to column\n\n";
                break;
            }
            else
            {
                int p[row][col][block], c[row][col][block];
                cout << "Enter another " << row << "*" << col << "*" << block << " matrix \n";
                for (int k = 0; k < block; k++) // Second matrix
                {
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            cout << "Index [" << i << "][" << j << "][" << k << "] : ";
                            cin >> c[i][j][k];
                        }
                    }
                }
                for (int k = 0; k < block; k++) // Multipying two matrix
                {
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            p[i][j][k] = 0;
                            for (int l = 0; l < col; l++)
                            {
                                p[i][j][k] += a[i][l][k] * c[l][j][k];
                            }
                        }
                    }
                }
                cout << "\nProduct of the two matrix \n";
                for (int k = 0; k < block; k++) // Display product
                {
                    cout << "\nBlock " << k + 1 << ":\n";
                    for (int i = 0; i < row; i++)
                    {
                        for (int j = 0; j < col; j++)
                        {
                            cout << p[i][j][k] << " ";
                            if (j + 1 == col)
                            {
                                cout << "\n";
                            }
                        }
                    }
                    cout << "\n";
                }
            }
        }
        break;
        case 3: // Transpose
        {
            int t[col][row][block];
            for (int k = 0; k < block; k++) // Swapping elements
            {
                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < col; j++)
                    {
                        t[j][i][k] = a[i][j][k];
                    }
                }
            }
            cout << "\nTranspose of input matrix\n";
            for (int k = 0; k < block; k++) // Display transpose
            {
                cout << "\nBlock " << k + 1 << ":\n";
                for (int i = 0; i < col; i++)
                {
                    for (int j = 0; j < row; j++)
                    {
                        cout << t[i][j][k] << " ";
                        if (j + 1 == row)
                        {
                            cout << "\n";
                        }
                    }
                }
                cout << "\n";
            }
        }
        break;
        case 0: // Exit
        {
            break;
        }
        default:
        {
            cout << "\n*INVALID INPUT*\n";
        }
        }
    }
    cout << "\nANKAN DAS\nUID: 20BCS5394\n";
    return 0;
}