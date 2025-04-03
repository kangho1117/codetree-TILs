#include <iostream>
#include <cstdlib>
using namespace std;
char board[10][10];
int bx,by,rx,ry,lx,ly;
int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> board[i][j];
            if(board[i][j]=='B')
            {
                bx = i;
                by = j;
            }
            if(board[i][j]=='R')
            {
                rx = i;
                ry = j;
            }
            if(board[i][j]=='L')
            {
                lx = i;
                ly = j;
            }
        }
    }
    if(bx == rx && rx == lx && ((bx<rx && rx < lx) || (lx < rx && rx < bx)))
    {
        cout<<abs(lx-bx) + abs(ly-by) -1 +2;
    }
    else if(by == ry && ry == ly && ((bx<rx && rx < lx) || (lx < rx && rx < bx)))
    {
        cout<<abs(lx-bx) + abs(ly-by) -1 +2;
    }
    else
    {
        cout<<abs(lx-bx) + abs(ly-by) -1;
    }
    return 0;
}