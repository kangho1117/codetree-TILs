#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1] = {0,};
    for(int i=0;i<m;i++)
    {
        int target;
        cin>>target;
        arr[target]++;
        if(arr[target] >= k)
        {
            cout<<target;
            return 0;
        } 
    }
    cout<<-1;
    return 0;
}