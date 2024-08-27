#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
int main() {
    int N,K,P,T;
    cin>>N>>K>>P>>T;
    vector<tuple<int,int,int>> infect;
    vector<pair<int,int>> ans(N+1,{0,0});
    for(int i=0;i<T;i++)
    {
        int t,x,y;
        cin>>t>>x>>y;
        infect.push_back(make_tuple(t,x,y));
    }
    sort(infect.begin(), infect.end());
    ans[P] = {1,K};
    for(auto &a : infect)
    {
        // for(int i=1; i<=N; i++)
        // cout<<"{"<<ans[i].first<<" "<<ans[i].second<<"}";
        // cout<<"\n\n";
        if(ans[get<1>(a)].first == 1 && ans[get<1>(a)].second > 0 && ans[get<2>(a)].first == 1 && ans[get<2>(a)].second > 0 )
        {
            ans[get<1>(a)].second--;
            ans[get<2>(a)].second--;
        }
        else if(ans[get<1>(a)].first == 1 && ans[get<1>(a)].second > 0 )
        {
            ans[get<1>(a)].second--;
            if(ans[get<2>(a)].first == 0)
            {
                ans[get<2>(a)].first = 1;
                ans[get<2>(a)].second = K;
            }
        }
        else if(ans[get<2>(a)].first == 1 && ans[get<2>(a)].second > 0 )
        {
            ans[get<2>(a)].second--;
            if(ans[get<1>(a)].first == 0)
            {
                ans[get<1>(a)].first = 1;
                ans[get<1>(a)].second = K;
            }
        }

    }
    // for(int i=1; i<=N; i++)
    //     cout<<"{"<<ans[i].first<<" "<<ans[i].second<<"}";
    //     cout<<"\n\n";
    // for(auto &a : infect)
    //     cout<<get<0>(a)<<" "<<get<1>(a)<<" "<<get<2>(a)<<"\n";
        for(int i=1; i<=N; i++)
        cout<<ans[i].first;
    return 0;
}