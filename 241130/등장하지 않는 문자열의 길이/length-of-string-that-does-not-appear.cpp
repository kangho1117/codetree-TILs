#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,ans=1000;
    cin>>n;
    string str;
    cin>>str;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string tempstr = str.substr(j,i);
            if(str.find(tempstr,j+1) != string::npos) break;
            else
            {
                ans = i;
                if(i+j == n)
                {
                    cout<<ans;
                    return 0;
                }
            }
        }
    }
    return 0;
}