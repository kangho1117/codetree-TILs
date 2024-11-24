#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n+1]={0,},ans=9999;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        arr[i] *=2;
        for(int j=0;j<n;j++)
        {
            int temp = arr[j],cnt=0;
            arr[j] = 9999;
            arr[n] = arr[n-1];
            for(int k=0;k<n;k++)
            {
                if(arr[k] == 9999) continue;
                else if(arr[k+1] == 9999) cnt += abs(arr[k]-arr[k+2]);
                else cnt += abs(arr[k]-arr[k+1]);
            } 
            arr[j] = temp;
            if(cnt < ans) ans = cnt;
        }
        arr[i] /=2;
    }
    cout<<ans;
    return 0;
}