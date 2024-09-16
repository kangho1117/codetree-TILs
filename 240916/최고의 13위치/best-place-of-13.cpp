#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    vector<vector<int>> vec(n+2,vector<int>(n+2,0));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>vec[i][j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1,temp=0;j<=n-2;j++)
        {
            if(vec[i][j]) temp++;
            if(vec[i][j+1]) temp++;
            if(vec[i][j+2]) temp++;
            if(max < temp) max = temp;
            temp=0;
        }
    }
    cout<<max;
    return 0;
}