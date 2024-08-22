#include <iostream>
using namespace std;
int main() {
    int n, max=0,up;
    cin>>n>>up;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0,cnt=0;i<n;i++)
    {
        cnt++;
        if(i==0 || arr[i]<=up) cnt=0;
        if(cnt > max) max = cnt;
    }
    cout<<max;
    return 0;
}