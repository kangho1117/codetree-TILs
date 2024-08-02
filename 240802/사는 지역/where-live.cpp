#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    string name,adnum,region;
    int n;
    cin>>n;
    tuple<string,string,string> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>name>>adnum>>region;
        arr[i] = make_tuple(name,adnum,region);
    }
    sort(arr,arr+n);
    cout<<"name "<<get<0>(arr[n-1])<<"\n";
    cout<<"addr "<<get<1>(arr[n-1])<<"\n";
    cout<<"city "<<get<2>(arr[n-1])<<"\n";
    return 0;
}