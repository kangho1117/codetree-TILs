#include <iostream>
using namespace std;
int a[3];
int main() {
    for (int i = 0; i < 3; i++) cin >> a[i];
    if(a[2]-a[1] > a[1]-a[0]) cout<<a[2]-a[1]-1;
    else cout<<a[1]-a[0]-1;
    return 0;
}