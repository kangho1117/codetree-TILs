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
        cnt++;
        if(i==0 || arr[i] != arr[i-1])
        {
            if(max < cnt) max = cnt;
            cnt=0;
        }
    }
    cout<<max;
    return 0;
}