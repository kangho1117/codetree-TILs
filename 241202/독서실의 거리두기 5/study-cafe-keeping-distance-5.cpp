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
            v[i] == '1';
            for(int j=0;j<n;j++)
            {
                if(v[j] == '1')
                {
                    int cnt1=0,cnt2=0,cnt3=0;
                    for(int a = j-1;j>=0;j--)
                    {
                        cnt1++;
                        if(v[j]=='1') break;
                    }
                    for(int a = j+1;j<n;j++)
                    {
                        cnt2++;
                        if(v[j]=='1') break;
                    }
                    if(cnt1 < cnt2) cnt3 = cnt1;
                    else cnt3 = cnt2;
                    if(ans < cnt3) ans = cnt3;
                }
            }
            v[i] == '0';
        }
    }
    cout<<ans;
    return 0;
}