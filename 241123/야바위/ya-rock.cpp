#include <iostream>
using namespace std;
int main() {
    int st,n,ans=0,ansnum=0;
    cin>>n;
    int arr2[n+1][3];
    for(int i=1;i<=n;i++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            arr2[i][1] = a;
            arr2[i][2] = b;
            arr2[i][3] = c;
        }
    for(st=1;st<=3;st++)
    {   
        bool arr[4]={0,};
        arr[st] = 1;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a=arr2[i][1],b=arr2[i][2],c=arr2[i][3];
            arr[0] = arr[a];
            arr[a] = arr[b];
            arr[b] = arr[0];
            arr[0] = 0;
            if(arr[c]) cnt++;
        }
        if(cnt > ans) 
        {
            ans = cnt;
            ansnum = st;
        }
    }
    cout<<ansnum;
    return 0;
}