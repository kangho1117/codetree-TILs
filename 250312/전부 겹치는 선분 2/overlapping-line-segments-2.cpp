#include <iostream>
using namespace std;
int n;
int x1[100], x2[100];
bool yes = false;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> x1[i] >> x2[i];
    for (int i = 0; i < n; i++) {
        int  arr[101] = {0,};
        for(int j=0; j<n; j++)
        {
            if(i==j) continue;
            for(int k=x1[j];k<=x2[j];k++)
                arr[k]++;
        }
        for(int i=1;i<=100;i++)
        if(arr[i]==n-1)
            yes = true;
    }
    if(yes) cout<<"Yes";
    else cout<<"No";
    return 0;
}