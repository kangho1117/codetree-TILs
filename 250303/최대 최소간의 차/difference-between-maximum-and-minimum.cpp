#include <iostream>
using namespace std;
int n, k,m=10000,ans=100000000,mm=0;
int arr[100];
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < m) m = arr[i];
        if(arr[i] > mm) mm = arr[i];
    }
    for (int f = m-k; f <= mm+k; f++) 
    {
        int cnt=0;
        for (int i = 0; i < n; i++) {
            if(arr[i]<f)
                cnt += f-arr[i];
            else if(arr[i]>f+k)
                cnt += arr[i] - (f+k);
        }
        if(cnt < ans) ans = cnt;
        //cout<<cnt<<" ! ";
    }
    
    cout<<ans;
    return 0;
}