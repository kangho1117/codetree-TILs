#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> arr(5);
    int ma=0,mi=10000,ans=100000;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    do{
        mi = arr[0] + arr[1];
        ma = arr[2] + arr[3];
        if(mi != ma && ma != arr[4])
        {
            
            int tempma = max(ma,max(mi,arr[4]));
            int tempmi = min(ma,min(mi,arr[4]));
            if(ans>tempma-tempmi) 
            {
                ans = tempma-tempmi;
                //cout<<tempma<<" "<<tempmi<<"\n";
            }
        }
    }while(next_permutation(arr.begin(), arr.end()));
    if(ans == 100000) cout<<-1;
    else cout<<ans;
    return 0;
}