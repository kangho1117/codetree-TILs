#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(1)
    {
        sort(arr,arr+n);
        if(arr[n-1]-arr[0]>17)
        {
            cnt++;
            if(arr[0]==arr[1]) arr[n-1]--;
            else arr[0]--;
        }
        else break;
    }
    cout<<cnt*cnt;
    return 0;
}