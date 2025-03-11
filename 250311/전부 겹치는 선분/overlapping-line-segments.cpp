#include <iostream>
using namespace std;
int n;
int x1[100], x2[100],arr[101];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        for(int j=x1[i];j<=x2[i];j++)
        {
            arr[j]++;
        }
    }
    bool yes = false;
    for (int i = 1; i <= 100; i++) 
    {
        if(arr[i]==n)
        {
            yes = true;
        }
    }
    if(yes) cout<<"Yes";
    else cout<<"No";
    return 0;
}