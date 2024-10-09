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
        while(it != A.end())
        {
            it = find(it, A.end(),B.front());
            auto temp = it;
            bool err = false;
            for(int i=0;i<m;i++,temp++)
            {
                //cout<<B[i]<<" "<<A[temp-A.begin()]<<" "<<temp-A.begin()<<"\n";
                if(B[i] != A[temp-A.begin()])
                {
                    err = true;
                    break;
                }
            }
            //cout<<"\n\n";
            it++;
            if(!err) cnt++;
            else if(temp == A.end()) break;
        }
    }while(next_permutation(B.begin(), B.end()));
    cout<<cnt;
    return 0;
}