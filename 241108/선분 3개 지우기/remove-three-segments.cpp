#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,maxnum=0;
    cin>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[i] = {x,y};
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            for(int k=0;k<n;k++)
            {
                if(i==k || j==k)continue;
                int temp=0;
                bool find = true;
                for(int w=1;w<n;w++)
                {
                    if(w==i || w==j || w==k) continue;
                    if(vec[w].first <= vec[w-1].second)
                    {
                        find = false;
                        break;
                    }
                }
                if(find) maxnum++;
            }
        }
    }
    cout<<maxnum;
    return 0;
}