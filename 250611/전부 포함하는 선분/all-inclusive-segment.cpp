#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
vector<pair<int,int>> v;
int main() {
    cin >> n;
    for (int x1,x2,i = 0; i < n; i++) {
        cin >> x1 >> x2;
        v.push_back({x1,x2});
    }
    sort(v.begin(), v.end());
    cout<<min(v[n-2].second - v[0].first,v[n-1].second - v[1].first);
    return 0;
}