#include <iostream>
using namespace std;

char *squares = new char[9]{'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkWin()
{
    if (squares[0] == squares[1] && squares[1] == squares[2])
    {
        return 1;
    }
    else if (squares[0] == squares[3] && squares[3] == squares[6])
    {
        return 1;
    }
    else if (squares[0] == squares[4] && squares[4] == squares[8])
    {
        return 1;
    }
    else if (squares[3] == squares[4] && squares[4] == squares[5])
    {
        return 1;
    }
    else if (squares[1] == squares[4] && squares[4] == squares[7])
    {
        return 1;
    }
    else if (squares[6] == squares[4] && squares[4] == squares[2])
    {
        return 1;
    }
    else if (squares[6] == squares[7] && squares[7] == squares[8])
    {
        return 1;
    }
    else if (squares[2] == squares[5] && squares[5] == squares[8])
    {
        return 1;
    }
    else if (squares[0] != '1' && squares[1] != '2' && squares[2] != '3' && squares[3] != '4' && squares[4] != '5' && squares[5] != '6' && squares[6] != '7' && squares[7] != '8' && squares[8] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void game()
{
    int *i = new int;
    int player = 1;
    int *choice = new int;
    char *mark = new char;

    do
    {

        player = (player%2) ? 1 : 2;
        cout<<"Enter the choice with is not choosen by any player in a 3X3 matrix from 1 to 9....\n";
        cout<<"Enter your choice: ";
        cin >> *choice;
        *mark = (player == 1) ? 'X' : 'O';

        if (squares[0] == '1' && *choice == 1)
        {
            squares[0] = *mark;
        }
        else if (squares[1] == '2' && *choice == 2)
        {
            squares[1] = *mark;
        }
        else if (squares[2] == '3' && *choice == 3)
        {
            squares[2] = *mark;
        }
        else if (squares[3] == '4' && *choice == 4)
        {
            squares[3] = *mark;
        }
        else if (squares[4] == '5' && *choice == 5)
        {
            squares[4] = *mark;
        }
        else if (squares[5] == '6' && *choice == 6)
        {
            squares[5] = *mark;
        }
        else if (squares[6] == '7' && *choice == 7)
        {
            squares[6] = *mark;
        }
        else if (squares[7] == '8' && *choice == 8)
        {
            squares[7] = *mark;
        }
        else if (squares[8] == '9' && *choice == 9)
        {
            squares[8] = *mark;
        }
        else
        {
            cout << "Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }

        *i = checkWin();
        player++;

    } while (*i == -1);

    if (*i == 1)
    {
        cout << "Player " << --player << " Wins" << endl;
        delete mark, choice, i;
    }
    else
    {
        cout << "Game Draw" << endl;
        delete mark, choice, i;
    }
}



int main()
{
    game();
    return 0;
}


