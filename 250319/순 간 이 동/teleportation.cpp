#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a, b, x, y,minans=1000;
int main() {
    cin >> a >> b >> x >> y;
    if(minans > abs(a-b)) minans = abs(a-b);
    if(minans > abs(a-x)+abs(y-b)) minans = abs(a-x)+abs(y-b);
    if(minans > abs(a-y)+abs(x-b)) minans = abs(a-y)+abs(x-b);
    cout<<minans;
    return 0;
}