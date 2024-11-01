#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,b,ans=0;
    cin>>n>>b;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
        cin>>vec[i];
    sort(vec.begin(), vec.end());
    for(int i=0;i<n;i++)
    {
        int tempb = b,cnt=0;
        vec[i]/=2;
        for(int j=0;j<n;j++)
        {
            if(tempb > vec[j])
            {
                tempb-=vec[j];
                cnt++;
            }
            else break;
        }
        if(ans < cnt) ans = cnt;
        vec[i]*=2;
    }
    cout<<ans;
    return 0;
}