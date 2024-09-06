#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n+2][n+2]={0};
    for(int i=0;i<m;i++)
    {
        int x,y,cnt=0;
        cin>>x>>y;
        arr[x][y] = 1;
        if(arr[x+1][y] == 1) cnt++;
        if(arr[x-1][y] == 1) cnt++;
        if(arr[x][y+1] == 1) cnt++;
        if(arr[x][y-1] == 1) cnt++;
        if(cnt==3) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}