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
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    //     if(i%10==0) cout<<"\n";
    // }
        
    for(int i=0,w=1;i<n && w<=100;i++)
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
                for(int z=now;z>arr[i-1];z--)
                {
                    int ll=0;
                    for(int k=i-1; ll<=l && k>=0;k--)
                    {
                        if(arr[k]+1==z) ll++;
                        else break;
                    }
                    //cout<<"!!"<<z<<" "<<ll<<" "<<n-i+ll<<"\n";
                    if(n-i+ll>=z) {ans = z; break;}
                }
            }
        }
    }
    cout<<ans;
    return 0;
}