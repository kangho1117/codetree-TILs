#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, t, d=3, dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
    string str;
    cin>>n>>t;
    cin>>str;
    int arr[n+2][n+2] ={0},x = n/2+1, y = n/2+1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>arr[i][j];
    int sum = arr[x][y];
    for(int i=0;i<t;i++)
    {
        if(str[i] == 'L')
        {
            d = (d-1+4)%4;
        }
        else if(str[i] == 'R')
        {
            d = (d+1)%4;
        }
        else if(str[i] == 'F' && 0 < x + dx[d] && x + dx[d] <= n && 0 < y + dy[d] && y + dy[d] <= n)
        {
            x += dx[d];
            y += dy[d];
            sum += arr[x][y];
        }
    }
    cout<<sum;
    return 0;
}