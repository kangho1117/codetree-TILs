#include <iostream>
using namespace std;
int main() {
    int n,s,ans=10000000,allsum=0;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        allsum+=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            else
            {
                int temp = allsum - arr[i] - arr[j], newtemp;
                if(temp-s < 0)
                {
                    newtemp = -(temp-s);
                    if(newtemp < ans) ans = newtemp;
                }
                else
                {
                    newtemp = temp-s;
                    if(newtemp < ans) ans = newtemp;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}