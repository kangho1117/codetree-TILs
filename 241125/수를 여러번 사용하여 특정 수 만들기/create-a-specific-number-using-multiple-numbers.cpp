#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,ans=0;
    cin>>a>>b>>c;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            d = i*a + j*b;
            if(d <= c && d > ans) ans = d;
        }
    }
    cout<<ans;
    return 0;
}