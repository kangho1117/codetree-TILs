#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    for(int v=0;v<n;v++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                for(int k=1;k<=9;k++)
                {
                    if(i == j || i == k || j == k) continue;
                    int cnt1=0,cnt2=0,x=a/100,y=a%100/10,z=a%10;
                    if(x==i) cnt1++;
                    if(y==j) cnt1++;
                    if(z==k) cnt1++;
                    if(x==j || x==k) cnt2++;
                    if(y==i || y==k) cnt2++;
                    if(z==i || z==j) cnt2++;

                    if(cnt1 == b && cnt2 == c) ans++;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}