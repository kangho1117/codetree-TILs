#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    vector<pair<char,int>> line; 
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
    }
    for(auto &a : vec)
    {
        if(line.empty())
        {
            int cntx=0, cnty=0;
            for(auto &v : vec)
            {
                if(a.first == v.first && a.second == v.second) continue;
                else if(a.first == v.first) cntx++;
                else if(a.second == v.second) cnty++;
            }
            if(cntx > cnty) line.push_back({'x',a.first});
            else line.push_back({'y',a.second});
            a.first = -1;
            a.second = -1;
            continue;
        }
        bool fit = false;
        for(auto &b : line)
        {
            if(b.first == 'x')
            {
                if(a.first == b.second) 
                {
                    fit = true;
                    break;
                }
            }
            else if(b.first == 'y')
            {
                if(a.second == b.second) 
                {
                    fit = true;
                    break;
                }
            }
        }
        if(!fit)
        {
            int cntx=0, cnty=0;
            for(auto &v : vec)
            {
                if(a.first == v.first && a.second == v.second) continue;
                else if(a.first == v.first) cntx++;
                else if(a.second == v.second) cnty++;
            }
            if(cntx > cnty) line.push_back({'x',a.first});
            else line.push_back({'y',a.second});
            a.first = -1;
            a.second = -1;
        }
    }
    if(line.size() <= 3) cout<<1;
    else cout<<0;
    return 0;
}