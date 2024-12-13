#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n],ans[2]={0,};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int cnt=0,pass=0;
        for(int j=i+1;j<=i+k && j<n; j++)
        {
            if(arr[i] == arr[j]) 
            {
                cnt++;
                pass=1;
                break;
            }
        }
        for(int j=i-1;j>=i-k && j>=0; j--)
        {
            if(pass) break;
            if(arr[i] == arr[j]) 
            {
                cnt++;
                pass=1;
                break;
            }
        }
        if(ans[1] < cnt)
        {
            ans[1] = cnt;
            ans[0] = arr[i];
        }
    }
    cout<<ans[0];
    return 0;
}