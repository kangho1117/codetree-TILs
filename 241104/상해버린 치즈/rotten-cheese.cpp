#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m,d,s,drug=0;
    cin>>n>>m>>d>>s;
    vector<vector<pair<int,int>>> cheese(51,vector<pair<int,int>>());
    for(int i=0;i<d;i++)
    {
        int p,m,t;
        cin>>p>>m>>t;
        cheese[m].push_back({p,t});
    }
    vector<pair<int,int>> patient;
    for(int i=0;i<s;i++)
    {
        int p,t;
        cin>>p>>t;
        patient.push_back({p,t});
    }

    for(int i=1;i<=50;i++)
    {
        for(auto &a : cheese[i])
        {
            bool eat = false;
            for(auto &b : patient)
            {
                if(a.first == b.first && a.second < b.second)
                {
                    eat = true;
                    break;
                }
            }
            if(eat && drug < cheese[i].size())
            {
                drug = cheese[i].size();
            }
        }
    }
    cout<<drug;
    return 0;
}