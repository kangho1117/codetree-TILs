#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        for(int k=1;k<=200;k++)
        {
            int cnt = 0;
            for(int i=0;i<n-1;i++)
            {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] - k == k - arr[i])
                {
                    cnt++;
                    // cout<<cnt<<"\n";
                    // cout<<arr[j]<<" "<<arr[i]<<" "<<j<<" "<<i<<" "<<k<<"\n";
                }
            }
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
    return 0;
}