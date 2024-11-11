#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int repeat(vector<vector<int>> vec,int budget, int n)
{
    int cnt=0;
    sort(vec.begin(), vec.end());
    for(int j=0;j<n;j++)
    {
        if(budget - vec[j][0] >= 0)
        {
            budget -= vec[j][0];
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int n,b,ans=0;
    cin>>n>>b;
    vector<vector<int>> arr(n,vector<int>(3,0)), arr2(n,vector<int>(3,0));
    for(int i=0,a,b;i<n;i++)
    {
        cin>>a>>b;
        arr[i][1] = a;
        arr[i][2] = b;
        arr[i][0] = a+b;
        arr2[i][1] = b;
        arr2[i][2] = a;
        arr2[i][0] = a+b;
    }
    for(int i=0;i<n;i++)
    {
        arr[i][0] = arr[i][1]/2 + arr[i][2];
        int cnt = repeat(arr,b,n);
        arr[i][0] = arr[i][1] + arr[i][2];
        if(cnt > ans) ans = cnt;
    }
    for(int i=0;i<n;i++)
    {
        arr2[i][0] = arr2[i][1] + arr2[i][2]/2;
        int cnt = repeat(arr2,b,n);
        arr2[i][0] = arr2[i][1] + arr2[i][2];
        if(cnt > ans) ans = cnt;
    }
    cout<<ans;
    return 0;
}