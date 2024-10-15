#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main() {
    int n,h,t,oricnt=0,cost=0;
    cin>>n>>h>>t;
    list<int> big,small;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        if(temp>h) big.push_back(temp);
        else if(temp<h) small.push_back(temp);
        else oricnt++;
    }
    if(oricnt >= t) {cout<<cost; return 0;}
    big.sort();
    small.sort(greater<>());
    while(t-oricnt>0)
    {
        if(big.empty())
        {
            cost += h-small.front();
            small.pop_front();
            oricnt++;
        }
        else if(small.empty())
        {
            cost += h-big.front();
            big.pop_front();
            oricnt++;
        }
        else
        {
            if(h - small.front() > big.front() - h)
            {
                //cout<<"a";
                cost += big.front()-h;
                big.pop_front();
                oricnt++;
                //cout<<cost<<"\n";
            }
            else
            {
                //cout<<"b";
                cost += h-small.front();
                small.pop_front();
                oricnt++;
                //cout<<cost<<"\n";
            }
        }
    }
    cout<<cost;
    return 0;
}