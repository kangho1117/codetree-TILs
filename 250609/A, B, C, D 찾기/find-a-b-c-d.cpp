#include <iostream>
#include <algorithm>
using namespace std;
int arr[15],a,b,c,d,ab,bc,cd,da,ac,bd,abc,abd,acd,bcd,abcd;
int main() {
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    sort(arr,arr+15);
    a = arr[0];
    b = arr[1];
    abcd = arr[14];
    acd = abcd-b;
    cd = acd - a;
    c = arr[2];
    d = cd-c;
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}