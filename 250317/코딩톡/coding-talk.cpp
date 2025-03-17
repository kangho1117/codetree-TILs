#include <iostream>
#include <vector>
using namespace std;

int n, m, p;
char c[100];
int u[100];
int main() {
    cin >> n >> m >> p;
    vector<bool> people(p,false);
    for (int i = 0; i < m; i++) {
        cin >> c[i] >> u[i];
    }
    for (int i = p-1; i < m; i++) {
        people[c[i]-65] = true;
    }
    for(int i=0;i<m;i++)
        if(people[i]==0) cout<<char(i+65)<<" ";
    

    return 0;
}