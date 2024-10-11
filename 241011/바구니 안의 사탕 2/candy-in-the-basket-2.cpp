#include <iostream>
using namespace std;
int main() {
    int n,k,max=0;
    cin>>n>>k;
    int arr[400]={0,};
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[b] += a;
    }
    for(int i=0;i<=100;i++)
    {
        for(int j=i-k,temp=0;j<=i+k;j++)
        {
            if(j>0) temp+=arr[j];
            if(temp > max) max = temp; 
        }
    }
    cout<<max;
    return 0;
}