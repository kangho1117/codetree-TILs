#include <iostream>
#include <algorithm>
using namespace std;
int arr[15],a,b,c,d,ab,bc,cd,da,ac,bd,abc,abd,acd,bcd,abcd;
int main() {
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    sort(arr,arr+15);
    a = arr[0];
    arr[0] = 0;
    b = arr[1];
    arr[1] = 0;
    abcd = arr[14];
    arr[14] = 0;
    bcd = abcd-a;
    acd = abcd-b;
    ab = a+b;
    cd = acd - a;
    c = arr[2];
    d = cd-c;
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}