#include <iostream>
using namespace std;

int main() {
    int n,input, max=0, cnt=1;
    bool up = true;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] <= arr[i+1]) 
        {
            if(up == false) 
            {
                cnt = 1;
                up = true;
            }
            cnt++;
            if(max < cnt) max = cnt;
        }
        else 
        {
            if(up == true)
            {
                cnt = 1;
                up = false;
            }
            cnt++;
            if(max < cnt) max = cnt;
        }
    }
    cout<<max;
    return 0;
}