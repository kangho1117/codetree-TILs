#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,l,ans=0;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int now = arr[i];
        if(n-i>=now) {
            ans = now;
        }
        else
        {
            if(l==0) break;
            else
            {
                int ll=0;
                for(int k=i-1; ll<=l && k>=0;k--)
                {
                    if(arr[k]+1==now) ll++;
                    else break;
                }
                if(n-i+ll>=now) ans = now;
            }
        }
    }
    cout<<ans;
    return 0;
}