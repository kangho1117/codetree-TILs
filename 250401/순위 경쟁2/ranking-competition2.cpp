#include <iostream>
using namespace std;
int n,befarr[2]={1,1},afarr[2]={1,1},ans=0,A=0,B=0;
char c[100];
int s[100];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c[i] >> s[i];
    }
    for(int i=0;i<n;i++)
    {
        if(c[i]=='A')
        {
            A+=s[i];
        }
        else if(c[i]=='B')
        {
            B+=s[i];
        }
        //cout<<A<<" "<<B<<" ";
            if(A==B)
            {
                afarr[0] = 1;
                afarr[1] = 1;
                if(afarr[0] != befarr[0] || afarr[1] != befarr[1])
                {
                    ans++;
                }
                
                    befarr[0] = afarr[0];
                    befarr[1] = afarr[1];
                
            }
            else if(A>B)
            {
                afarr[0] = 1;
                afarr[1] = 0;
                if(afarr[0] != befarr[0] || afarr[1] != befarr[1])
                {
                    ans++;
                }
                
                    befarr[0] = afarr[0];
                    befarr[1] = afarr[1];
                
            }
            else if(A<B)
            {
                afarr[0] = 0;
                afarr[1] = 1;
                if(afarr[0] != befarr[0] || afarr[1] != befarr[1])
                {
                    ans++;
                }
                
                    befarr[0] = afarr[0];
                    befarr[1] = afarr[1];
                
            }
            //cout<<ans<<"\n";
    }
    cout<<ans;
    return 0;
}