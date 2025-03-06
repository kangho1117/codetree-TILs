#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;

    if(a<d && d<b) cout<<b-c;
    else if(a<c && c<b) cout<<d-a;
    else if(c<a && a<d) cout<<b-c;
    else if(c<b && b<d) cout<<d-a;
    else cout<<(b-a)+(d-c);

    return 0;
}