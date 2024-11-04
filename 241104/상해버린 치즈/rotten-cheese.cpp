#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m,d,s,drug=0;
    cin>>n>>m>>d>>s;
    vector<vector<int>> cheese(51,vector<int>(51,1000));
    for(int i=0;i<d;i++)
    {
        int p,m,t;
        cin>>p>>m>>t;
        if(t < cheese[m][p]) cheese[m][p] = t;
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
        bool eat = true;
        for(auto &a : patient)
        {
            if(cheese[i][a.first] != 1000 && cheese[i][a.first] >= a.second)
            {
                eat = false;
                break;
            } 
        }
        if(eat)
        {
            int cnt=0;
            for(int j=1;j<=50;j++)
                if(cheese[i][j]!=1000 && 0 <cheese[i][j]) cnt++;
            if(drug < cnt) drug = cnt;
        }
    }
    cout<<drug;
    return 0;
}