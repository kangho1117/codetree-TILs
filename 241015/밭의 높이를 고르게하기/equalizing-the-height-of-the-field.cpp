#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n,h,t,cost=INT_MAX;
    cin>>n>>h>>t;
    vector<int> arr(n);
    for(int i=0,temp;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-t;i++)
    {
        int tempcost=0;
        for(int j=i;j<i+t && j<n;j++)
        {
            if(arr[j] == h)
            {
                continue;
            }
            else
            {
                tempcost += abs(arr[j]-h);
            }
        }
        cost = min(cost, tempcost);
    }
    cout<<cost;
    return 0;
}