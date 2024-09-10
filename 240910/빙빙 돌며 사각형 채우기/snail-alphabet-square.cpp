#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m,d=0,x=1,y=1,dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    cin>>n>>m;
    vector<vector<char>> arr(n+2,vector<char>(m+2,'!'));
    int cnt = n*m;
    char now = 'A';
    while(cnt--)
    {
        arr[x][y] = now;
        if(x+dx[d]<= 0 || n < x+dx[d] || y + dy[d] <= 0 || m < y + dy[d] || arr[x+dx[d]][y+dy[d]] != '!')
            d = (d+1)%4;
        if(now == 'Z') now = 'A';
        else now++;
        x += dx[d];
        y += dy[d];
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