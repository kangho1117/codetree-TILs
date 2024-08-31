#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n+2, vector<int>(n+2,-1));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>vec[i][j];

int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int cnt=0;
            if(vec[i+1][j]==1)cnt++;
            if(vec[i-1][j]==1)cnt++;
            if(vec[i][j+1]==1)cnt++;
            if(vec[i][j-1]==1)cnt++;
            if(cnt>=3) ans++;
        }
    }
    cout<<ans;
    return 0;
}