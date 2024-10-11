#include <iostream>
using namespace std;
int main() {
    int n,k,max=0;
    cin>>n>>k;
    int arr[101]={0,};
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[b] += a;
    }
    for(int i=k;i<=100-k;i++)
    {
        for(int j=i-k,temp=0;j<=i+k;j++)
        {
            temp+=arr[j];
            if(temp > max) max = temp; 
        }
    }
    cout<<max;
    return 0;
}