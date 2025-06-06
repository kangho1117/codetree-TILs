#include <iostream>
#include <algorithm>
using namespace std;
int n,min_of_max = 10000000000;
int arr[200000];

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+2*n);
    for(int i=0,j=n;j<2*n,i<n;i++,j++)
    {
        if(min_of_max > arr[j]-arr[i]) min_of_max = arr[j]-arr[i];
    }
    cout<<min_of_max;
    // Please write your code here.
    //2 5 7 9 10 15
    return 0;
}