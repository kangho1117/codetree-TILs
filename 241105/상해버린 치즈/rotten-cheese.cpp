#include <iostream>
using namespace std;
int main() {
    int n,m,d,s,cheese[51][51]={0,},sick[51]={0,},maxnum=0;
    cin>>n>>m>>d>>s;
    for(int i=0;i<d;i++)
    {
        int p,m,t;
        cin>>p>>m>>t;
        if(cheese[m][p] == 0 || t < cheese[m][p]) cheese[m][p] = t;
    }
    for(int i=0;i<s;i++)
    {   
        int p,t;
        cin>>p>>t;
        sick[p] = t;
    }
    for(int i=1;i<=50;i++)
    {
        bool find = true;
        for(int j=1;j<=50;j++)
        {
            if(sick[j] != 0)
            {
                int eattime = cheese[i][j];
                if(eattime == 0 || eattime >= sick[j])
                {
                    find = false;
                    break;
                }
            }
        }
        if(find)
        {
            int temp=0;
            for(int j=1;j<=50;j++) if(cheese[i][j] != 0) temp++;
            if(temp > maxnum) maxnum = temp;
        }
    }
    cout<<maxnum;
    return 0;
}