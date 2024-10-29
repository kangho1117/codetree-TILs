#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,time=0;
    cin>>n;
    int arr[1001]={0,};
    pair<int,int> person[n];
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        person[i]={a,b};
        for(int j=a;j<b;j++)
            arr[j]++;
    }
    
    for(int j=0;j<n;j++)
    {
        int temp=0;
        int a = person[j].first;
        int b = person[j].second;
        for(int k=a;k<b;k++)
            arr[k]--;
        for(int i=1;i<=1000;i++)
            if(arr[i]>0) temp++;
        time = max(time,temp);
        for(int k=a;k<b;k++)
            arr[k]++;
    }
    cout<<time;

    return 0;
}