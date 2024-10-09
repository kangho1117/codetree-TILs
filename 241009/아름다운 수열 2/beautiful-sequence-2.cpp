#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int n,m,cnt=0;
    cin>>n>>m;
    vector<int> A(n),B(m);
    vector<list<int>> arr(101);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        arr[A[i]].push_back(i);
    }
    for(int i=0;i<m;i++)
        cin>>B[i];
    sort(B.begin(), B.end());

    do
    {
        int size = arr[B.front()].size();
        //auto it = arr[B.front()].begin();
        for(int i=0;i<size;i++)
        {
            int broken = 0;
            for(int k=0,j=arr[B.front()].front(); k<m && j<n; j++,k++)
            {
                //cout<<B[k]<<" "<<A[j]<<"\n";
                //if(A.size()-arr[B.front()].front() < B.size()) break;
                if(B[k] != A[j])
                {
                    broken = 1;
                    break;
                }
                broken = 2;
            }
            if(broken==2) 
            {
                cnt++;
                arr[B.front()].pop_front();
            }
            //cout<<"\n\n";
        }
    }while(next_permutation(B.begin(), B.end()));
    cout<<cnt;
    return 0;
}