#include <iostream>
#include <algorithm>
using namespace std;
int x1, y1, x2, y2;
int a1, b1, a2, b2, A, B, C, D;
int main() {
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    A = max(x1,max(x2,max(a1,a2)));
    C = min(x1,min(x2,min(a1,a2)));
    B = max(y1,max(y2,max(b1,b2)));
    D = min(x1,min(x2,min(a1,a2)));
    cout<< min(A-C,B-D) * min(A-C,B-D);
    return 0;
}