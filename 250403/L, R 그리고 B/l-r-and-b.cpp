#include <iostream>
using namespace std;
char board[12][12], now='B';
int x,y;
int search(int x,int y)
{
    now = board[x][y];
    if(now != 'L')
    {
        search(x,y);
        search(x,y);
        search(x,y);
    }
}
int main() {
    for (int i = 0; i <= 11; i++) {
        for (int j = 0; j <= 11; j++) {
            if(i==0 || i==11 || j==0 || j==11)
            {
                board[i][j] = '!';
            }
            else cin >> board[i][j];
            if(board[i][j]=='B')
            {
                x = i, y = j;
            }
        }
    }
    while(now!='L')
    {
        for(int i)
    }
    return 0;
}