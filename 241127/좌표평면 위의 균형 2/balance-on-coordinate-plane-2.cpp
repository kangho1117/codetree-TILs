#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main() {
    int n,ans=9999;
    cin>>n;
    pair<int,int> arr[n];

    for(int i=0,x,y;i<n;i++)
    {
        cin>>x>>y;
        arr[i] = {x,y};
    }

    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            map<int,int> mp1,mp2,mp3,mp4;
            for(int k=0;k<n;k++)
            {
                int x = arr[k].first;
                int y = arr[k].second;
                if(x>i && y > j)//1
                {
                    mp1.insert({x,y});
                }
                else if(x<=i && y > j)//2
                {
                    mp2.insert({x,y});
                }
                else if(x>i && y <= j)//3
                {
                    mp3.insert({x,y});
                }
                else if(x <= i && y <= j)//4
                {
                    mp4.insert({x,y});
                }
            }
            int cnt = max(mp1.size(),max(mp2.size(),max(mp3.size(),mp4.size())));
            if(cnt < ans) ans = cnt;
        }
    }
    cout<<ans;
    return 0;
}