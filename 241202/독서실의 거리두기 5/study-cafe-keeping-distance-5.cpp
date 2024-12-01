#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;  
    vector<char> v(n+2,'1'); 
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]=='0')
        {
            int cnt1=0,cnt2=0,cnt3=0;
            for(int a=i-1;a>=0;a--)
            {
                cnt1++;
                if(v[a]=='1') break;
            }
            for(int a=i+1;a<=n+1;a++)
            {
                cnt2++;
                if(v[a]=='1') break;
            }
            if(cnt1 > cnt2) cnt3 = cnt2;
            else cnt3 = cnt1;
            if(ans < cnt3) ans = cnt3; 
        }
    }
    cout<<ans;
    return 0;
}