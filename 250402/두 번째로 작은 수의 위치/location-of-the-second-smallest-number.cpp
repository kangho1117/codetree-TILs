#include <iostream>
using namespace std;
int n,smallest1=100,ans=100,idx=0,temp=0;
int a[100];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if(a[i] < smallest1) smallest1 = a[i];
    }
    for (int i = 1; i <= n; i++) {
        if(a[i] > smallest1 && a[i] < ans) 
        {
            ans = a[i];
            idx = i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if(a[i] == ans)
        {
            temp++;
        }
    }
    if(temp==1) cout<<idx;
    else cout<<-1;
    return 0;
}