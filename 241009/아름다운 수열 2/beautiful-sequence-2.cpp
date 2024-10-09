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
    vector<int> A(n),B(m);
    vector<vector<int>> arr(101);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        arr[A[i]].push_back(i);
    }
    for(int i=0;i<m;i++)
        cin>>B[i];
    sort(B.begin(), B.end());

    // for(auto &a : arr)
    // {
    //     for(auto &b : a)
    //     {
    //         cout<<b<<" ";
    //     }
    //     cout<<"\n";
    // }

    do
    {
        int size = arr[B.front()].size();
        for(int i=0;i<size;i++)
        {
            int broken = 0;
            for(int k=0,j=arr[B.front()][i]; k<m && arr[B.front()][i]+m<=n && j<arr[B.front()][i]+m; j++,k++)
            {
                //cout<<B[k]<<" "<<A[j]<<"\n";
                if(B[k] != A[j])
                {
                    broken = 1;
                    break;
                }
                broken = 2;
            }
            if(broken==2) {cnt++;}
            //cout<<"\n\n";
        }
    }while(next_permutation(B.begin(), B.end()));
    cout<<cnt;
    return 0;
}