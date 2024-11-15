#include <iostream>
using namespace std;
int main() {
    int t,a,b,cnt=0;
    char arr[1001]={0,};
    cin>>t>>a>>b;
    for(int i=0,x;i<t;i++)
    {
        char c;
        cin>>c>>x;
        arr[x] = c;
    }
    for(int i=a;i<=b;i++)
    {
        int d1p=1000,d1m=1000,d2p=1000,d2m=1000,d1=1000,d2=1000;
        for(int j=i;j<=1000;j++)
        {
            if(arr[j]=='S')
            {
                d1p = j-i;
                break;
            }
        }
        for(int j=i;j>=0;j--)
        {
            if(arr[j]=='S')
            {
                d1m = i-j;
                break;
            }
        }
        for(int j=i;j<=1000;j++)
        {
            if(arr[j]=='N')
            {
                d2p = j-i;
                break;
            }
        }
        for(int j=i;j>=0;j--)
        {
            if(arr[j]=='N')
            {
                d2m = i-j;
                break;
            }
        }
        if(d1p > d1m) d1 = d1m;
        else d1 = d1p;
        if(d2p > d2m) d2 = d2m;
        else d2 = d2p;
        if(d1 <= d2) cnt++;
    }
    cout<<cnt;
    return 0;
}