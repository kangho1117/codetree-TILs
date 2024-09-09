#include <iostream>
using namespace std;
int main() {
    int n,m,x=1,y=1,d=1,dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0},sum=1;
    cin>>n>>m;
    int arr[n+2][m+2] = {0};
    while(sum<=n*m)
    {
        arr[x][y] = sum++;
        if(0 < x + dx[d] && x+dx[d] <= n && 0 < y + dy[d] && y+dy[d] <= m && arr[x+dx[d]][y+dy[d]] == 0)
        {
            x += dx[d];
            y += dy[d];
        }
        else {
            d = (d-1+4)%4;
            x += dx[d];
            y += dy[d];
            }
        //cout<<"d : "<<d<<"\n";
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}