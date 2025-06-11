#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,x1[101],x2[101],minnum=1000;
vector<bool> v(101,0);

int check(vector<bool> v, int x1, int x2)
{
    int len=0,c1,c2;
    v[x1] = 0;
    v[x2] = 0;
    for(int i=1;i<=100;i++)
    {
        if(v[i]) {c1 = i; break;}
    }
    for(int i=100;i>=1;i--)
    {
        if(v[i]) {c2 = i; break;}
    }
    len = c2-c1;
    return len;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        v[x1[i]] = 1;
        v[x2[i]] = 1;
    }
    for (int i = 0; i < n; i++) {
        minnum = min(minnum, check(v,x1[i],x2[i]));
    }
    cout<<minnum;
    return 0;
} 