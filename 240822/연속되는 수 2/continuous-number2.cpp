#include <iostream>
using namespace std;
int main() {
    int n,max=0;
    cin>>n;
    int arr[n];
    for(int i=0,now=0;i<n;i++)
        cin>>arr[i];
    for(int i=0,cnt=0;i<n;i++)
    {
        if(i==0 || arr[i] != arr[i-1])cnt=0;
        cnt++;
        if(max < cnt) max = cnt;
    }
    cout<<max;
    return 0;
}