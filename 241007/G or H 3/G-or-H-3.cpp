#include <iostream>
using namespace std;
int main() {
    int n,k,ans=0;
    char arr[10002]={0,}; 
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        char c;
        int t;
        cin>>t>>c;
        arr[t] = c;
    }
    for(int i=1,temp;i<=10000;i++)
    {
        temp=0;
        for(int j=i;j<=i+k && j<=10000;j++)
        {
            if(arr[j]=='G') temp+=1;
            else if(arr[j]=='H') temp+=2;

            if(temp > ans) ans = temp;
        }
    }
    cout<<ans;
    return 0;
}