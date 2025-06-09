#include <iostream>
#include <algorithm>
using namespace std;
int arr[15],a,b,c,d,abcd;
int main() {
    for (int i = 0; i < 15; i++)
        cin >> arr[i];
    sort(arr,arr+15);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    abcd = arr[14];
    d = abcd-a-b-c;
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}