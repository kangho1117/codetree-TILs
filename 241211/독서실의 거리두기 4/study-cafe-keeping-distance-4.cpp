#include <iostream>
using namespace std;
int main() {
    int n,ans=0;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int f=0;f<n;f++)
    {
        if(arr[f] == '0')
        {
            arr[f] = '1';
            for(int s=f+1;s<n;s++)
            {
                if(arr[s] == '0')
                {
                    arr[s] = '1';
                    int cnt3=999;
                    for(int i=0;i<n;i++)
                    {
                        if(arr[i] == '1')
                        {
                            int cnt1=999,cnt2=999;
                            for(int a=i+1,temp=0;a<n;a++)
                            {
                                temp++;
                                if(a>=n-1 && arr[n-1] == '0') cnt1=99;
                                if(arr[a] == '1') {cnt1=temp;break;}
                                
                            }
                            for(int b=i-1,temp=0;b>=0;b--)
                            {
                                temp++;
                                if(b<=0 && arr[0] == '0') cnt2=99;
                                if(arr[b] == '1') {cnt2=temp;break;}
                                
                            }
                            
                            if(cnt1<=cnt2 && cnt3 >= cnt1) cnt3 = cnt1;
                            else if(cnt1>=cnt2 && cnt3 >= cnt2) cnt3 = cnt2;
                            //cout<<i<<" "<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<ans<<"\n";
                        }
                    }
                    if(ans < cnt3) ans = cnt3;
                    arr[s] = '0';
                }
            }
            arr[f] = '0';
        }
    }
    cout<<ans;
    return 0;
}