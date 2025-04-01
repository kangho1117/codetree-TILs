#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    vector<pair<int,int>> a(101,{101,101});
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());

    for(int i=0; i<=n; i++)
    {
        if(a[0].first != a[i].first)
        {
            if(a[i].first == 101)
            {
                cout<<-1;
                break;
            }
            else if(a[i].first != a[i+1].first)
            {
                cout<<a[i].second;
                break;
            }
            else
            {
                cout<<-1;
                break;
            }
        }
    }
    return 0;
}