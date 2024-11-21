#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>i)
            {
                if(j==0) cnt++;
                else if(arr[j-1]<=i) cnt++;
            }
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
    return 0;
}