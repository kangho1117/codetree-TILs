#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a, b, x, y;
int main() {
    cin >> a >> b >> x >> y;
    cout<<min(abs(a-b), min(abs(a-x)+abs(y-b), abs(a-y)+abs(x-b)));
    return 0;
}