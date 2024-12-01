#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,m,ans=0,sum=0;
void cal(vector<int> &v, int num, int cnt)
{
    sum += v[num];
    num = v[num];
    //cout<<cnt<<" "<<num<<"\n";
    if(cnt>=m) return;
    cal(v,num,++cnt);
}

int main() {
    cin>>n>>m;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        sum = 0;
        cal(v,i,1);
        ans = max(ans, sum);
    }
    cout<<ans;
    return 0;
}