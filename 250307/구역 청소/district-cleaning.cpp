#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;

    if(a<=c && c<=b) cout<<d-a;
    else if(c<=a && a<=b) cout<<b-c;
    else cout<<(b-a)+(d-c);

    return 0;
}