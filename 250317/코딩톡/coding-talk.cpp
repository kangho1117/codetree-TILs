#include <iostream>
#include <vector>
using namespace std;

int n, m, p;
char c[100];
int u[100];
int main() {
    cin >> n >> m >> p;
    vector<bool> people(n,false);
    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }
    for (int i = p-1; i < m; i++) {
        people[c[i]-65] = true;
    }
    for(int i= p-1; i>0; i--)
    {
        if(u[i-1] == u[i]) people[c[i-1]-65] = true;
    }
    for(int i=0;i<n;i++)
        if(people[i]==0) cout<<char(i+65)<<" ";
    return 0;
}