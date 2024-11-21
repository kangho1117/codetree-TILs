#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    int arr[n+2]={0,};
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++)
    {
        int cnt=0;
        bool bing = false;
        for(int j=1;j<=n;j++)
        {
            if(arr[j-1]<=i && arr[j]>i && arr[j+1]<=i)
            {
                cnt++;
            }
            else if(arr[j]>i && arr[j-1]<=i)
            {
                bing = true;
                cnt++;
            }
            else if(arr[j]>i && arr[j+1]<=i && bing)
            {
                bing = false;
            }
        }
        ans = max(ans,cnt);
    }
    cout<<ans;
    return 0;
}