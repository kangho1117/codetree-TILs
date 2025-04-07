#include <iostream>
#include <algorithm>
using namespace std;
char c[100];
int s[100];
int main() {
    int n,ans=0,score[3]={0,};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }
    bool bef[3],aft[3];
    bef[0]=1;bef[1]=1;bef[2]=1;
    aft[0]=1;aft[1]=1;aft[2]=1;
    for(int i=0;i<n;i++)
    {
        score[c[i]-65] += s[i];
        int m = max(score[0],max(score[1],score[2]));
        if(score[0] == m) aft[0] = 1;
        else aft[0] = 0;
        if(score[1] == m) aft[1] = 1;
        else aft[1] = 0;
        if(score[2] == m) aft[2] = 1;
        else aft[2] = 0;
        if(!(bef[0] == aft[0] && bef[1] == aft[1] && bef[2] == aft[2]))
        {
            bef[0] = aft[0];
            bef[1] = aft[1];
            bef[2] = aft[2];
            ans++;
        }
    }
    cout<<ans;
    return 0;
}