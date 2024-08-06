#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cal1 = a*60+b;
    int cal2 = c*60+d;
    cout<<cal2-cal1;
    return 0;
}