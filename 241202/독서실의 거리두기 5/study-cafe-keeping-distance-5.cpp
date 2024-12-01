#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;  
    vector<char> v(n); 
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]=='0')
        {
            int cnt1=0,cnt2=0;
            for(int a=i-1;a>=0;a--)
            {
                cnt1++;
                if(v[a]=='1') break;
            }
            for(int a=i+1;a<n;a++)
            {
                cnt2++;
                if(v[a]=='1') break;
            }
            if(cnt1 >= cnt2) cnt1 = cnt2;
            if(ans < cnt1) ans = cnt1; 
        }
    }
    cout<<ans;
    return 0;
}