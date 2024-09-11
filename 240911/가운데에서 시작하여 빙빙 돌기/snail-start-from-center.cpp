#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n+2,vector<int>(n+2,0));
    int num = 1, x = n/2+1, y= n/2+1, d= 0, dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    arr[x][y] = num;
    while(num <= n*n)
    {
        num++;
        //cout<<x + dx[d]<<" "<<y+dy[d]<<"\n";
        //cout<<arr[x + dx[d]][y+dy[d]]<<"\n";
        if(arr[x + dx[d]][y+dy[d]] == 0 && 0 < x + dx[d] && x + dx[d] <=n && 0 < y+dy[d] && y+dy[d] <=n)
        {
            x += dx[d];
            y += dy[d];
            arr[x][y] = num;
            if(arr[x + dx[(d-1+4)%4]][y+dy[(d-1+4)%4]] == 0) d = (d-1+4)%4;
        }


        
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<d<<" \n\n";
    
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}