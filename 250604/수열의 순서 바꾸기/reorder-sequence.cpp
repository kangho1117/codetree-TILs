#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
    int n,cnt=0,temp=0;
    cin>>n;
    deque<int> dq;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        dq.push_back(temp);
    }
    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        if(temp < *it)
        {
            temp = *it;
        }
        else
        {
            cnt++;
            dq.pop_front();
            temp = dq.front()-1;
            it = dq.begin();
        }
    }
    cout<<cnt;
    return 0;
}