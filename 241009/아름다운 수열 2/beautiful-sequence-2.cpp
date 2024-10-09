#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> A(n),B(m),arr(101,0);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        arr[A[i]]++;
    }
    for(int i=0;i<m;i++)
        cin>>B[i];
    sort(B.begin(), B.end());



    do
    {
        auto it = A.begin();
        int num = arr[B.front()];
        while(num>0 && it != A.end())
        {
            it = find(it, A.end()-B.size(),B.front());
            num--;
            auto temp = it;
            bool err = false;
            for(int i=0;i<m;i++,temp++)
            {
                //cout<<B[i]<<" "<<A[temp-A.begin()]<<" "<<temp-A.begin()<<"\n";
                if(B.front() != A[temp-A.begin()]) it++;
                if(B[i] != A[temp-A.begin()])
                {
                    err = true;
                    break;
                }
            }
            //cout<<"\n\n";
            it++;
            if(!err) cnt++;
            if(temp == A.end()) break;
        }
    }while(next_permutation(B.begin(), B.end()));
    cout<<cnt;
    return 0;
}