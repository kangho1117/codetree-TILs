#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int cnt4=0;
    for(int i=0;i<n;i++)
    {
        int cnt3=100;
        if(arr[i] == '0')
        {
            arr[i] = '1';
            for(int j=0;j<n;j++)
            {
                if(arr[j]=='0') continue;
                int cnt1=1,cnt2=1;
                for(int a = j-1;a>=-1;a--)
                {
                    if(arr[a] == '1') break;
                    else if(a<=0) cnt1 = 99;
                    cnt1++;
                }
                for(int b = j+1;b<=n;b++)
                {
                    if(arr[b] == '1') break;
                    else if(b>=n-1) cnt2 = 99;
                    cnt2++;
                }
                if(cnt1 < cnt2 && cnt1 < cnt3) cnt3 = cnt1;
                else if(cnt2 <= cnt1 && cnt2 < cnt3) cnt3 = cnt2;
                //cout<<i<<" "<<j<<" "<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<cnt4<<"\n\n";
                if(cnt3 == 1) break;
            }
            if(cnt4 < cnt3) cnt4 = cnt3;
            arr[i] = '0';
        }
    }
    cout<<cnt4;
    return 0;
}