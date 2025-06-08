#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<pair<int,int>> v(4);
    int x1, y1, x2, y2;
    int a1, b1, a2, b2;
    int a,b,c,d;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    a = min(x1,a1);
    b = min(y1,b1);
    c = max(x2,a2);
    d = max(y2,b2);
    cout<<(c-a) * (d-b);
    return 0;
}