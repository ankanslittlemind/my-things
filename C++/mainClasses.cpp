using namespace std;
class TicTacToe
{
    char gameboard[4][4];
    public:
        TicTacToe();
        void setx(int row, int column);
        void seto(int row, int column);
        int checkx();
        int checko();
        void print();
};

TicTacToe::TicTacToe()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            gameboard[i][j] = '-';
        }
    }
}

void TicTacToe::setx(int row, int column)
{
    gameboard[row][column] = 'x';
}

void TicTacToe::seto(int row, int column)
{
    gameboard[row][column] = 'o';
}

void TicTacToe::print()
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<gameboard[i][j] << " ";
        }
        cout << endl;
    }
}

int TicTacToe::checkx()
{
    int count = 0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(gameboard[i][j] == 'x')
            {                
                count++;
            }
        }
        if (count%4 == 0)
        {
            return 1;
        }
        else 
        {
            count = 0;
            continue;
        }
    }
    count = 0;
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<4; i++)
        {
            if (gameboard[i][j] == 'x')
            {
                count++;
            }
        }
        if (count%4 == 0)
        {
            return 1;
        }
        else 
        {
            count = 0;
            continue;
        }
    }
    count = 0;
    for(int i=0; i<4; i++)
    {
        if (gameboard[i][i] == 'x')
        {
            count++;
            if (count%4 == 0)
            {
                return 1;
            }
        }
    }
    count = 0;
    for(int i=0; i<4; i++)
    {
        if (gameboard[i][3-i] == 'x')
        {
            count++;
            if (count%4 == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

int TicTacToe::checko()
{
    int count = 0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(gameboard[i][j] == 'o')
            {
                count++;
            }
        }
        if (count%4 == 0)
        {
            return 2;
        }
        else 
        {
            count = 0;
            continue;
        }
    }
    count = 0;
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<4; i++)
        {
            if (gameboard[i][j] == 'o')
            {
                count++;
            }
        }
        if (count%4 == 0)
        {
            return 2;
        }
        else 
        {
            count = 0;
            continue;
        }
    }
    count = 0;
    for(int i=0; i<4; i++)
    {
        if (gameboard[i][i] == 'o')
        {
            count++;
            if (count%4 == 0)
            {
                return 2;
            }
        }
    }
    count = 0;
    for(int i=0; i<4; i++)
    {
        if (gameboard[i][3-i] == 'o')
        {
            count++;
            if (count%4 == 0)
            {
                return 2;
            }
        }
    }
    return 0;
}