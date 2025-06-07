#include <iostream>
#include <algorithm>
using namespace std;

int arr[7],a,b,c,ab,bc,ca,abc;

int main() {
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+7);
    a = arr[0];
    abc = arr[6];  
    bc = arr[5];
    ca = arr[4];
    c = ca-a;
    b = bc-c;
    
    cout<<a<<" "<<b<<" "<<c;
    

    return 0;
}