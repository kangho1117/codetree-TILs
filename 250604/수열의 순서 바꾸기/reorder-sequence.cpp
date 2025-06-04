#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    deque<int> cmp,dq1,dq2;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        dq1.push_back(temp);
    }
    cmp = dq1;
    sort(cmp.begin(), cmp.end());
    bool loop = true;
    while(loop)
    {
        deque<int> t1 = dq1, t2 = dq2, sum;
        while(!(t1.empty() && t2.empty()))
        {
            if(t2.empty())
            {
                sum.push_back(t1.front());
                t1.pop_front();
            }
            else if(t1.empty())
            {
                sum.push_back(t2.front());
                t2.pop_front();
            }
            else if(t1.front() < t2.front())
            {
                sum.push_back(t1.front());
                t1.pop_front();
            }
            else
            {
                sum.push_back(t2.front());
                t2.pop_front();
            }
        }
        // cout<<"sum : ";
        // for(auto a : sum) cout<<a<<" ";
        // cout<<"\n";
        if(sum == cmp) loop = false;
        else
        {
            if(!dq1.empty())
            {
                dq2.push_back(dq1.front());
                dq1.pop_front();
                cnt++;
            }
        }
        // cout<<"dq1 : ";
        // for(auto a : dq1) cout<<a<<" ";
        // cout<<"\n";
        // cout<<"dq2 : ";
        // for(auto a : dq2) cout<<a<<" ";
        // cout<<"\n";
    }
    cout<<cnt;
    return 0;
}