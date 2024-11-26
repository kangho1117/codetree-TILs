#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    vector<pair<char,int>>  line; 
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back({x,y});
    }
    for(auto &a : vec)
    {
        for(auto &b : line)
        {
            if(b.first == 'x')
            {
                if(a.first == b.second) continue;
                else
                {
                    int cntx=0, cnty=0;
                    for(auto &v : vec)
                    {
                        if(a.first == v.first) cntx++;
                        else if(a.second == v.second) cnty++;
                    }
                    if(cntx > cnty) line.push_back({'x',a.first});
                    else line.push_back({'y',a.second});
                }
            }
            else
            {
                if(a.first == b.second) continue;
                else
                {
                    int cntx=0, cnty=0;
                    for(auto &v : vec)
                    {
                        if(a.first == v.first) cntx++;
                        else if(a.second == v.second) cnty++;
                    }
                    if(cntx > cnty) line.push_back({'x',a.first});
                    else line.push_back({'y',a.second});
                }
            }
        }
    }
    if(line.size() <= 3) cout<<1;
    else cout<<0;
    return 0;
}
//기존에 존재하는 선에 해당 점이 걸리는지 판단
//안 걸린다면 나랑 같은 선에 존재하는 점 중에 어느 선쪽이 더 많은지 판단
//더 많은 쪽으로 선을 생성