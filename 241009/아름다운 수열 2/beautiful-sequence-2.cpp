#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> A(n),B(m);
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
    sort(B.begin(), B.end());
    do
    {
        auto it = A.begin();
        while(1)
        {
        it = find(it, A.end(),B.front());
        if(it != A.end()) 
        {
            bool err = false;
            for(int i=0;i<m;i++,it++)
            {
                //cout<<B[i]<<" "<<A[it-A.begin()]<<"\n";
                if(B[i] != A[it-A.begin()])
                {
                    err = true;
                    break;
                }
            }
            //cout<<"\n\n";
            if(!err) cnt++;
            else if(it == A.end()) break;
            
        }
        else break;
        }
    }while(next_permutation(B.begin(), B.end()));
    cout<<cnt;
    return 0;
}