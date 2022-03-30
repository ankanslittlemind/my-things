#include<iostream>
#include "mainClasses.cpp"
using namespace std;

int main()
{
    string user1, user2;
    int winner=0;
    cout << "First user enter name: ";
    cin >> user1;
    cout << "Second user enter name: ";
    cin >> user2;
    TicTacToe newgame;
    for (int i=0; i<16; i++)
    {
        while(winner==0)
        {
            int row, column;
            if (i%2 == 0)
            {
                cout << "\n" << user1 << " enter row and column to set 'x' :";
                cin >> row >> column;
                newgame.setx(row, column);
                winner=newgame.checkx();
            }
            else
            {
                cout << "\n" << user2 << " enter row and column to set 'o' :";
                cin >> row >> column;
                newgame.seto(row, column);
                winner=newgame.checko();
            }
        }
    }
    if (winner==1)
    {
        cout << user1 << " is the winner.";
    }
    else if (winner==2)
    {
        cout << user2 << " is the winner.";
    }
    else if (winner==0)
    {
        cout << "Tie game";
    }
    newgame.print();
}