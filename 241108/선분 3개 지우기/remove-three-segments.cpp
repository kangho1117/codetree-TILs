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
                for(int w=0,p=1;w<n-1;w++)
                {
                    if(w==i || w==j || w==k) continue;
                    if(w+p==i || w+p==j || w+p==k) 
                    {
                        w--;
                        p++;
                    }
                    else p=1;
                    if(vec[w].second >= vec[w+p].first)
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