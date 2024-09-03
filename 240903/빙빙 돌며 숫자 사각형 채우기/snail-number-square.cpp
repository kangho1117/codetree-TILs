#include <iostream>
using namespace std;
int main() {
    int n,m,x=1,y=1,d=0;
    cin>>n>>m;
    int arr[n+2][m+2]={0}, dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    while(arr[x][y] == 0)
    {
        if(x==1 && y==1) arr[x][y] = 1;
        else arr[x][y] = arr[x-dx[d]][y-dy[d]] + 1;

        if(n<(x + dx[d])) {d=(d+1)%4;}
        else if((x + dx[d]) < 1) {d=(d+1)%4;}
        else if(m<(y + dy[d])) {d=(d+1)%4;}
        else if((y + dy[d]) < 1) {d=(d+1)%4;}
        else if(arr[x + dx[d]][y + dy[d]] != 0) {d=(d+1)%4;}
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
        cout<<"\n\n";
    return 0;
}