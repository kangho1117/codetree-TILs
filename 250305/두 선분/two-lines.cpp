#include <iostream>
using namespace std;
int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    if(x3<=x1 && x1<=x4) cout<<"intersecting";
    else if(x3<=x2 && x2<=x4) cout<<"intersecting";
    else if(x1<=x3 && x3<=x2) cout<<"intersecting";
    else if(x1<=x4 && x4<=x2) cout<<"intersecting";
    else cout<<"nonintersecting";
    return 0;
}