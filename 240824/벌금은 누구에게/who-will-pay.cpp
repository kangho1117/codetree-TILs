#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1] = {0,};
    int save[m];
    for(int i=0;i<m;i++)
        cin>>save[i];
    for(int i=0;i<m;i++)
    {
        int target = save[i];
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