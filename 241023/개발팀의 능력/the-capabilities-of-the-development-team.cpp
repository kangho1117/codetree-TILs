#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    sort(arr,arr+5);
    if(arr[0]+arr[2] != arr[1]+arr[3])
    {
        int ma = max(arr[4],max(arr[0]+arr[2],arr[1]+arr[3]));
        int mi = min(arr[4],min(arr[0]+arr[2],arr[1]+arr[3]));
        cout<<ma-mi;
    }
    else cout<<-1;
    return 0;
}