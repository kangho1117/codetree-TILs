#include <iostream>
#include <climits>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main() {
    int arr[6], ans=INT_MAX;
    for(int i=0;i<6;i++)
        cin>>arr[i];
    
    for(int i1=0;i1<4;i1++)
    {
        for(int j1=i1+1;j1<5;j1++)
        {
            for(int k1=j1+1;k1<6;k1++)
            {
                int temp1 = arr[i1]+arr[j1]+arr[k1];
                for(int i2=0;i2<4;i2++)
                {
                    if(i1 == i2 || j1 == i2 || k1 == i2) continue;
                    for(int j2=i2+1;j2<5;j2++)
                    {
                        if(i1 == j2 || j1 == j2 || k1 == j2) continue;
                        for(int k2=j2+1;k2<6;k2++)
                        {
                            if(i1 == k2 || j1 == k2 || k1 == k2) continue;
                            int temp2 = arr[i2]+arr[j2]+arr[k2];
                            // cout<<arr[i1]<<" "<<arr[j1]<<" "<<arr[k1]<<"\n";
                            // cout<<arr[i2]<<" "<<arr[j2]<<" "<<arr[k2]<<"\n";
                            // cout<<temp1<<" "<<temp2<<"\n";
                            ans = min(ans,abs(temp1-temp2));
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
    return 0;
}